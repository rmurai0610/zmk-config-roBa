right:
	west build -p -s zmk/app -d build -b seeeduino_xiao_ble -S studio-rpc-usb-uart -- -DZMK_CONFIG=/Users/riku/keyboard/zmk-config-roBa/config -DSHIELD=roBa_R && \
	mkdir -p firmware && \
	mv build/zephyr/zmk.uf2 firmware/roBa_R.uf2

left:
	west build -p -s zmk/app -d build -b seeeduino_xiao_ble -- -DZMK_CONFIG=/Users/riku/keyboard/zmk-config-roBa/config  -DSHIELD=roBa_L
