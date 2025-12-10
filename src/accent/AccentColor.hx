package accent;

import cpp.UInt8;

@:include("accentcolor.hpp")
@:buildXml("<include name='${haxelib:accentcolor}/src/build.xml' />")
extern class AccentColor {
    @:native("accentcolor::getAccentColor")
    static function getAccentColor():Array<UInt8>;
}