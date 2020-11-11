#!/bin/sh

case "$1" in

	--dark)
	# kitty
	sed -i 's/nord-kitty-light.conf/nord-kitty.conf/g' ~/.config/kitty/kitty.conf	
	# openbox
	# sed -i 's/Sweetly/Fleon/g' ~/.config/openbox/rc.xml;
	# wallpaper
	feh --bg-scale ~/Pictures/Wallpapers/raindrops-4_FHD.jpg;
	# rofi	
	sed -i 's/light/dark/g' ~/.config/rofi/config.rasi;
	# GTK 
	sed -i 's/Sweetly/Fleon/g' ~/.gtkrc-2.0;
	sed -i 's/Sweetly/Fleon/g' ~/.config/gtk-3.0/settings.ini;
	# tint2
	killall tint2:
	tint2 -c /home/irfannm/.config/tint2/statint-dark.tint2rc;;
esac
