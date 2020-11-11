#!/bin/sh

case "$1" in

	--light)
	# kitty
	sed -i 's/nord-kitty.conf/nord-kitty-light.conf/g' ~/.config/kitty/kitty.conf;
	# openbox
	# sed -i 's/Fleon/Sweetly/g' ~/.config/openbox/rc.xml;
	# wallpaper
	feh --bg-scale ~/Pictures/Wallpapers/mountain-1.jpg;
	# rofi
	sed -i 's/dark/light/g' ~/.config/rofi/config.rasi;
	# GTK
	sed -i 's/Fleon/Sweetly/g' ~/.gtkrc-2.0;
	sed -i 's/Fleon/Sweetly/g' ~/.config/gtk-3.0/settings.ini;
	# tint2
	killall tint2;
	tint2 -c /home/irfannm/.config/tint2/statint.tint2rc;;
esac
