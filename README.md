> [!warning]
> This configuration must be used with the Mac French key layout

This is work in progress!

This layout is inspired by [HD vibratium-vb](https://sites.google.com/alanreiser.com/handsdown/home/hands-down-neu#h.78qav8n932m7). 

The voyel side is quite similar to hd Vibranium with 
- the apostophe acting as an adaptive key (`A'/AY`, `E'/EO`,`I'/IU`,`U'/UI` ,`O'/OE`). On hold, this key changes to a layer that transforms `P` to `B`, in order to have the `MBL` trigram and `BL` bigram. Hold is triggered only for `M,P,L` keys.
- The `H` is also adaptative and makes long completion: `TH/TION,SH/SION,EH/ETTE,MH/MENT`. The `H` digraphs are done using the sticky stift key on the consonant side (see below). This key is used only when `H` is not after one consonant.

The consonant side is more different. 
- Thanks to putting `D` on the home row, it is possible to have many bigrams and trigrams as rolls: `STR,SCR,NDR,MPL,MPT,MPR,XPL,XPR,NTL,NCL,NGL,SCL,RCL` (some of them using the adaptive key described just below).
- there are some adaptive keys too: `GC/GL,CG/CL,TD/TL,LX/LT,FG/FL`.
- There is a sticky shift key `*` that is
  - an adaptive key, because I use it mainly to capitalize letters after a space, so I can assign this key to something different when typed after a letter: `T*TH/S*/SH,G*GH/,C*/CH,W*/WH,A*/à,E*/è,I*/é,U*/ù,O*/ô,Y*/IJ`. Note that combos could be used for the H digraphs. 
  - sticky shift on tap by default
  - caps word on double tap


  
Key characteristics:
- [HD vibratium-vb](https://sites.google.com/alanreiser.com/handsdown/home/hands-down-neu#h.78qav8n932m7) using the [antecedent mod morph](https://github.com/zmkfirmware/zmk/pull/2042) and the very useful [module](https://github.com/ssbb/zmk-antecedent-morph)
- [Urob's timeless homerow mod](https://github.com/urob/zmk-config?tab=readme-ov-file#timeless-homerow-mods)
- [Urob's ZMK helpers](https://github.com/urob/zmk-helpers) to simplify the code base

![my_keymap (1)](https://github.com/user-attachments/assets/6ae52d43-be39-4c22-9d75-c4ee55b9c94a)<svg width="732" height="734" viewBox="0 0 732 734" class="keymap" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink">
<style>/* inherit to force styles through use tags */
svg path {
    fill: inherit;
}

/* font and background color specifications */
svg.keymap {
    font-family: SFMono-Regular,Consolas,Liberation Mono,Menlo,monospace;
    font-size: 14px;
    font-kerning: normal;
    text-rendering: optimizeLegibility;
    fill: #24292e;
}

/* default key styling */
rect.key {
    fill: #f6f8fa;
}

rect.key, rect.combo {
    stroke: #c9cccf;
    stroke-width: 1;
}

/* default key side styling, only used is draw_key_sides is set */
rect.side {
    filter: brightness(90%);
}

/* color accent for combo boxes */
rect.combo, rect.combo-separate {
    fill: #cdf;
}

/* color accent for held keys */
rect.held, rect.combo.held {
    fill: #fdd;
}

/* color accent for ghost (optional) keys */
rect.ghost, rect.combo.ghost {
    stroke-dasharray: 4, 4;
    stroke-width: 2;
}

text {
    text-anchor: middle;
    dominant-baseline: middle;
}

/* styling for layer labels */
text.label {
    font-weight: bold;
    text-anchor: start;
    stroke: white;
    stroke-width: 4;
    paint-order: stroke;
}

/* styling for optional footer */
text.footer {
    text-anchor: end;
    dominant-baseline: auto;
    stroke: white;
    stroke-width: 4;
    paint-order: stroke;
}

/* styling for combo tap, and key hold/shifted label text */
text.combo, text.hold, text.shifted {
    font-size: 11px;
}

text.hold {
    text-anchor: middle;
    dominant-baseline: auto;
}

text.shifted {
    text-anchor: middle;
    dominant-baseline: hanging;
}

text.layer-activator {
    text-decoration: underline;
}

/* styling for hold/shifted label text in combo box */
text.combo.hold, text.combo.shifted {
    font-size: 8px;
}

/* lighter symbol for transparent keys */
text.trans {
    fill: #7b7e81;
}

/* styling for combo dendrons */
path.combo {
    stroke-width: 1;
    stroke: gray;
    fill: none;
}

/* Start Tabler Icons Cleanup */
/* cannot use height/width with glyphs */
.icon-tabler > path {
    fill: inherit;
    stroke: inherit;
    stroke-width: 2;
}
/* hide tabler's default box */
.icon-tabler > path[stroke="none"][fill="none"] {
    visibility: hidden;
}
/* End Tabler Icons Cleanup */

@media (prefers-color-scheme: dark) {
svg.keymap { fill: #d1d6db; }
rect.key { fill: #3f4750; }
rect.key, rect.combo { stroke: #60666c; }
rect.combo, rect.combo-separate { fill: #1f3d7a; }
rect.held, rect.combo.held { fill: #854747; }
text.label, text.footer { stroke: black; }
text.trans { fill: #7e8184; }
path.combo { stroke: #7f7f7f; }

}</style>
<g transform="translate(30, 0)" class="layer-HD">
<text x="0" y="28" class="label" id="HD">HD:</text>
<g transform="translate(0, 56)">
<g transform="translate(28, 81)" class="key keypos-0">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key"/>
<text x="0" y="0" class="key tap">Qu</text>
</g>
<g transform="translate(84, 46)" class="key keypos-1">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key"/>
<text x="0" y="0" class="key tap">,</text>
</g>
<g transform="translate(140, 28)" class="key keypos-2">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key"/>
<text x="0" y="0" class="key tap">.</text>
</g>
<g transform="translate(196, 44)" class="key keypos-3">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key"/>
<text x="0" y="0" class="key tap">BSpace</text>
</g>
<g transform="translate(252, 52)" class="key keypos-4">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key"/>
<text x="0" y="0" class="key tap">T</text>
</g>
<g transform="translate(420, 52)" class="key keypos-5">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key"/>
<text x="0" y="0" class="key tap">K</text>
</g>
<g transform="translate(476, 44)" class="key keypos-6">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key"/>
<text x="0" y="0" class="key tap">G*</text>
</g>
<g transform="translate(532, 28)" class="key keypos-7">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key"/>
<text x="0" y="0" class="key tap">C*</text>
</g>
<g transform="translate(588, 46)" class="key keypos-8">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key"/>
<text x="0" y="0" class="key tap">F</text>
</g>
<g transform="translate(644, 81)" class="key keypos-9">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key"/>
<text x="0" y="0" class="key tap">W</text>
</g>
<g transform="translate(28, 137)" class="key keypos-10">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key"/>
<text x="0" y="0" class="key tap">&#x27;*</text>
<a href="#MBL">
<text x="0" y="24" class="key hold layer-activator">MBL</text>
</a></g>
<g transform="translate(84, 102)" class="key keypos-11">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key"/>
<text x="0" y="0" class="key tap">A</text>
<text x="0" y="24" class="key hold">Alt</text>
</g>
<g transform="translate(140, 84)" class="key keypos-12">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key"/>
<text x="0" y="0" class="key tap">E</text>
<text x="0" y="24" class="key hold">Shift</text>
</g>
<g transform="translate(196, 100)" class="key keypos-13">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key"/>
<text x="0" y="0" class="key tap">I</text>
<text x="0" y="24" class="key hold">Gui</text>
</g>
<g transform="translate(252, 108)" class="key keypos-14">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key"/>
<text x="0" y="0" class="key tap">Enter</text>
</g>
<g transform="translate(420, 108)" class="key keypos-15">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key"/>
<text x="0" y="0" class="key tap">V</text>
</g>
<g transform="translate(476, 100)" class="key keypos-16">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key"/>
<text x="0" y="0" class="key tap">T</text>
<text x="0" y="24" class="key hold">Gui</text>
</g>
<g transform="translate(532, 84)" class="key keypos-17">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key"/>
<text x="0" y="0" class="key tap">D*</text>
<text x="0" y="24" class="key hold">Shift</text>
</g>
<g transform="translate(588, 102)" class="key keypos-18">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key"/>
<text x="0" y="0" class="key tap">N</text>
<text x="0" y="24" class="key hold">Alt</text>
</g>
<g transform="translate(644, 137)" class="key keypos-19">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key"/>
<text x="0" y="0" class="key tap">S</text>
<text x="0" y="24" class="key hold">Ctrl</text>
</g>
<g transform="translate(28, 193)" class="key keypos-20">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key"/>
<text x="0" y="0" class="key tap">H*</text>
</g>
<g transform="translate(84, 158)" class="key keypos-21">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key"/>
<text x="0" y="0" class="key tap">Y</text>
</g>
<g transform="translate(140, 140)" class="key keypos-22">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key"/>
<text x="0" y="0" class="key tap">O</text>
</g>
<g transform="translate(196, 156)" class="key keypos-23">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key"/>
<text x="0" y="0" class="key tap">U</text>
</g>
<g transform="translate(252, 164)" class="key keypos-24">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key"/>
<text x="0" y="0" class="key tap">-</text>
</g>
<g transform="translate(420, 164)" class="key keypos-25">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key"/>
<text x="0" y="0" class="key tap">B</text>
</g>
<g transform="translate(476, 156)" class="key keypos-26">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key"/>
<text x="0" y="0" class="key tap">L</text>
</g>
<g transform="translate(532, 140)" class="key keypos-27">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key"/>
<text x="0" y="0" class="key tap">P</text>
</g>
<g transform="translate(588, 158)" class="key keypos-28">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key"/>
<text x="0" y="0" class="key tap">M</text>
</g>
<g transform="translate(644, 193)" class="key keypos-29">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key"/>
<text x="0" y="0" class="key tap">X</text>
</g>
<g transform="translate(221, 221) rotate(15.0)" class="key keypos-30">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key"/>
<text x="0" y="0" class="key tap">
<tspan x="0" dy="-1.2em">sk</tspan><tspan x="0" dy="1.2em">SYM</tspan>
</text>
<text x="0" y="24" class="key hold">SYM</text>
</g>
<g transform="translate(279, 245) rotate(30.0)" class="key keypos-31">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key"/>
<text x="0" y="0" class="key tap">Space</text>
<text x="0" y="24" class="key hold">NAV</text>
</g>
<g transform="translate(393, 245) rotate(-30.0)" class="key keypos-32">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key"/>
<text x="0" y="0" class="key tap">R</text>
<text x="0" y="24" class="key hold">ARROWS</text>
</g>
<g transform="translate(451, 221) rotate(-15.0)" class="key keypos-33">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key"/>
<text x="0" y="0" class="key tap">
<tspan x="0" dy="-0.6em">sk</tspan><tspan x="0" dy="1.2em">Shift*</tspan>
</text>
</g>
</g>
</g>
<g transform="translate(30, 339)" class="layer-MBL">
<text x="0" y="28" class="label" id="MBL">MBL:</text>
<g transform="translate(0, 56)">
<g transform="translate(28, 81)" class="key trans keypos-0">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key trans"/>
<text x="0" y="0" class="key trans tap">▽</text>
</g>
<g transform="translate(84, 46)" class="key trans keypos-1">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key trans"/>
<text x="0" y="0" class="key trans tap">▽</text>
</g>
<g transform="translate(140, 28)" class="key trans keypos-2">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key trans"/>
<text x="0" y="0" class="key trans tap">▽</text>
</g>
<g transform="translate(196, 44)" class="key trans keypos-3">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key trans"/>
<text x="0" y="0" class="key trans tap">▽</text>
</g>
<g transform="translate(252, 52)" class="key trans keypos-4">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key trans"/>
<text x="0" y="0" class="key trans tap">▽</text>
</g>
<g transform="translate(420, 52)" class="key trans keypos-5">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key trans"/>
<text x="0" y="0" class="key trans tap">▽</text>
</g>
<g transform="translate(476, 44)" class="key trans keypos-6">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key trans"/>
<text x="0" y="0" class="key trans tap">▽</text>
</g>
<g transform="translate(532, 28)" class="key trans keypos-7">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key trans"/>
<text x="0" y="0" class="key trans tap">▽</text>
</g>
<g transform="translate(588, 46)" class="key trans keypos-8">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key trans"/>
<text x="0" y="0" class="key trans tap">▽</text>
</g>
<g transform="translate(644, 81)" class="key trans keypos-9">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key trans"/>
<text x="0" y="0" class="key trans tap">▽</text>
</g>
<g transform="translate(28, 137)" class="key trans keypos-10">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key trans"/>
<text x="0" y="0" class="key trans tap">▽</text>
</g>
<g transform="translate(84, 102)" class="key trans keypos-11">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key trans"/>
<text x="0" y="0" class="key trans tap">▽</text>
</g>
<g transform="translate(140, 84)" class="key trans keypos-12">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key trans"/>
<text x="0" y="0" class="key trans tap">▽</text>
</g>
<g transform="translate(196, 100)" class="key trans keypos-13">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key trans"/>
<text x="0" y="0" class="key trans tap">▽</text>
</g>
<g transform="translate(252, 108)" class="key trans keypos-14">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key trans"/>
<text x="0" y="0" class="key trans tap">▽</text>
</g>
<g transform="translate(420, 108)" class="key trans keypos-15">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key trans"/>
<text x="0" y="0" class="key trans tap">▽</text>
</g>
<g transform="translate(476, 100)" class="key trans keypos-16">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key trans"/>
<text x="0" y="0" class="key trans tap">▽</text>
</g>
<g transform="translate(532, 84)" class="key trans keypos-17">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key trans"/>
<text x="0" y="0" class="key trans tap">▽</text>
</g>
<g transform="translate(588, 102)" class="key trans keypos-18">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key trans"/>
<text x="0" y="0" class="key trans tap">▽</text>
</g>
<g transform="translate(644, 137)" class="key trans keypos-19">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key trans"/>
<text x="0" y="0" class="key trans tap">▽</text>
</g>
<g transform="translate(28, 193)" class="key trans keypos-20">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key trans"/>
<text x="0" y="0" class="key trans tap">▽</text>
</g>
<g transform="translate(84, 158)" class="key trans keypos-21">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key trans"/>
<text x="0" y="0" class="key trans tap">▽</text>
</g>
<g transform="translate(140, 140)" class="key trans keypos-22">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key trans"/>
<text x="0" y="0" class="key trans tap">▽</text>
</g>
<g transform="translate(196, 156)" class="key trans keypos-23">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key trans"/>
<text x="0" y="0" class="key trans tap">▽</text>
</g>
<g transform="translate(252, 164)" class="key trans keypos-24">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key trans"/>
<text x="0" y="0" class="key trans tap">▽</text>
</g>
<g transform="translate(420, 164)" class="key trans keypos-25">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key trans"/>
<text x="0" y="0" class="key trans tap">▽</text>
</g>
<g transform="translate(476, 156)" class="key trans keypos-26">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key trans"/>
<text x="0" y="0" class="key trans tap">▽</text>
</g>
<g transform="translate(532, 140)" class="key keypos-27">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key"/>
<text x="0" y="0" class="key tap">B</text>
</g>
<g transform="translate(588, 158)" class="key trans keypos-28">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key trans"/>
<text x="0" y="0" class="key trans tap">▽</text>
</g>
<g transform="translate(644, 193)" class="key trans keypos-29">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key trans"/>
<text x="0" y="0" class="key trans tap">▽</text>
</g>
<g transform="translate(221, 221) rotate(15.0)" class="key trans keypos-30">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key trans"/>
<text x="0" y="0" class="key trans tap">▽</text>
</g>
<g transform="translate(279, 245) rotate(30.0)" class="key trans keypos-31">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key trans"/>
<text x="0" y="0" class="key trans tap">▽</text>
</g>
<g transform="translate(393, 245) rotate(-30.0)" class="key trans keypos-32">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key trans"/>
<text x="0" y="0" class="key trans tap">▽</text>
</g>
<g transform="translate(451, 221) rotate(-15.0)" class="key trans keypos-33">
<rect rx="6" ry="6" x="-26" y="-26" width="52" height="52" class="key trans"/>
<text x="0" y="0" class="key trans tap">▽</text>
</g>
</g>
</g>
<text x="702.0" y="706.0" class="footer">Created with <a href="https://github.com/caksoylar/keymap-drawer">keymap-drawer</a></text></svg>

