# iot-atmega-bare

atmega barebone

<img src="doc/20181101_161646x.jpg" width=500/>

## features

- simple [atmega8](https://www.microchip.com/wwwproducts/en/ATmega8)/[328](https://www.microchip.com/wwwproducts/en/ATmega328) holder
- ICSP connector
- micro usb connector with [ams1117-3.3](http://www.advanced-monolithic.com/pdf/ds1117.pdf) voltage regulator

## prerequisites

- [atmega barebone schematics/pcb](https://easyeda.com/lorenzo.delana/atmega-barebone) can be etched using this [procedure](https://github.com/devel0/knowledge/blob/master/electronics/pcb-etching.md) on a copper 70x49mm
- plastic case can be built using 3d printer and this [parametric](https://www.thingiverse.com/apps/customizer/run?thing_id=3182923)
  - part : `box`
  - wt : `2`
  - lss : `[2, 2, 2]`
  - is : `71.5, 50.5, 10`
  - oc : `1`
  - lh = rh = bh : `[]`
  - fh = `[ [ 18, 12, 60.5, false, wt + lss[2] ] ]`
- serial debug : use an usb/ttl converter connecting `GND`, `RX` to atmega `GND`, `RX` ( PD1 )
- [arduino-utils](https://github.com/devel0/iot-arduino-utils) allow to save precious flash
- [vscode](https://github.com/devel0/knowledge/blob/master/electronics/vscode-arduino.md)
