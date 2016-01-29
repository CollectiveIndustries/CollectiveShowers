[Variables]

; ----------------------------------
;Style Options
; ----------------------------------

FontStyle=Times New Roman
TextColorBody=71BCD2
TextColorTitle=0, 192, 0, 255
TextColorSubTitle=255,255,255,255
FontSizeTitle=12
FontSizeSubTitle=11
FontSizeBody=10

; ----------------------------------
; STYLES used to "centralize" options
; ----------------------------------

[styleTitle]
StringAlign=CENTER
StringCase=UPPER
StringStyle=BOLD
StringEffect=SHADOW
FontEffectColor=0,0,0,50
FontColor=#TextColorTitle#
FontFace=#FontStyle#
FontSize=#FontSizeTitle#
AntiAlias=1
ClipString=1

[styleSubTitle]
StringAlign=CENTER
StringCase=NONE
StringStyle=Bold
StringEffect=SHADOW
FontEffectColor=0,0,0,20
FontColor=#TextColorSubTitle#
FontFace=#FontStyle#
FontSize=#FontSizeSubTitle#
AntiAlias=1
ClipString=1

[styleSubTitleL]
StringAlign=LEFT
StringCase=NONE
StringStyle=Bold
StringEffect=SHADOW
FontEffectColor=0,0,0,20
FontColor=#TextColorSubTitle#
FontFace=#FontStyle#
FontSize=#FontSizeSubTitle#
AntiAlias=1
ClipString=1

[styleLeftText]
StringAlign=LEFT
; Meters using styleLeftText will be left-aligned.
StringCase=NONE
StringStyle=BOLD
StringEffect=SHADOW
FontEffectColor=0,0,0,20
FontColor=#TextColorBody#
FontFace=#FontStyle#
FontSize=#FontSizeBody#
AntiAlias=1
ClipString=1

[styleRightText]
StringAlign=RIGHT
StringCase=NONE
StringStyle=BOLD
StringEffect=SHADOW
FontEffectColor=0,0,0,20
FontColor=#TextColorBody#
FontFace=#FontStyle#
FontSize=#FontSizeBody#
AntiAlias=1
ClipString=1

[styleSeperator]
SolidColor=255,255,255,100

; ----------------------------------
; Sensor Config Settings
; ----------------------------------
; These need to be set up for your hardware profile

@Include=#@#\sensors.inc