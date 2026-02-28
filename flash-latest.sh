#!/bin/bash
set -euo pipefail

REPO="ehabkost/my-zsa-moonlander-keymap"
KEYMAPP="/mnt/c/Program Files (x86)/Keymapp/keymapp.exe"
WIN_FIRMWARE_DIR="/mnt/c/Users/ehabk/Downloads"
WIN_FIRMWARE_NAME="moonlander_firmware.bin"

# Download latest firmware artifact
tmpdir=$(mktemp -d)
trap 'rm -rf "$tmpdir"' EXIT

echo "Downloading latest firmware artifact..."
gh run download -R "$REPO" -n moonlander_reva_LqVOD -D "$tmpdir"

# Find the firmware file (.bin or .hex)
firmware=$(find "$tmpdir" -type f \( -name '*.bin' -o -name '*.hex' \) | head -1)

if [ -z "$firmware" ]; then
    echo "Error: No firmware file found in artifact" >&2
    exit 1
fi

# Copy to a fixed Windows path
cp "$firmware" "$WIN_FIRMWARE_DIR/$WIN_FIRMWARE_NAME"
win_firmware=$(wslpath -w "$WIN_FIRMWARE_DIR/$WIN_FIRMWARE_NAME")

echo ""
echo "Firmware saved to: $win_firmware"
echo ""
echo "Opening Keymapp... In the app:"
echo "  1. Click the Flash button"
echo "  2. Browse to: $win_firmware"
echo "  3. Press the reset button on your keyboard"
echo ""

"$KEYMAPP" &
disown
