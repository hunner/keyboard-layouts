# Keyboard layouts

These are my keyboard layouts. They are being kept here so I don't have to
maintain a qmk fork.

## How it works

The only supported layout name is `hunner` :).

Layouts are structured under `keyboards/<board name>/<layout name>`.

`make` will build a docker image for compiling keyboard .hex files

`./scripts/build-keyboard <board name>` will build the .hex using the container.

`./scripts/flash-keyboard <board name>` will flash the .hex to `/dev/ttyACM0` via `avrdude`

## Example usage

`./scripts/build-keyboard 40percentclub/foobar`

Resulting firmware will be in `./40percentclub_foobar_hunner.hex`.

## Flashing

### With Arduino style (usually pro-micro boards)

```
./scripts/flash-keyboard 40percentclub/foobar
```

### With DFU (boards like the planck and dz60)

```
$ dfu-programmer atmega32u4 erase
$ dfu-programmer atmega32u4 flash whatever_huner.hex
$ dfu-programmer atmega32u4 reset
```
