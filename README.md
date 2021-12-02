# Nojs
A javascript engine that is not javascript

## Install

Clone this repository
```bash
git clone https://github.com/sS3lla/nojs

cd nojs/build

cmake ..

make

./nojs
```

## Usage
Todo

## General Project Structure
lib -> Libraries which are as generic as we could make them

include -> For Libraries public decleration

src ->Application logic which is specific to the js engine

The application will be written in the the src, and will call out to the libs

## License
[Mozilla Public License 2.0](https://choosealicense.com/licenses/mpl-2.0/)