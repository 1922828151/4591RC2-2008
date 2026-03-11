/*
 * func-name: ??0CHotZonePic@@QAE@ABV0@@Z
 * func-address: 0x10074690
 * callers: none
 * callees: 0x1000d900, 0x1006ea90, 0x1006ec60, 0x10071230
 */

CHotZonePic *__thiscall CHotZonePic::CHotZonePic(CHotZonePic *this, const struct CHotZonePic *a2)
{
  CREControl::CREControl(this, a2);
  *(_DWORD *)this = &CHotZonePic::`vftable';
  *((_DWORD *)this + 133) = *((_DWORD *)a2 + 133);
  *((_DWORD *)this + 134) = *((_DWORD *)a2 + 134);
  *((_DWORD *)this + 135) = *((_DWORD *)a2 + 135);
  sub_1006EA90((_DWORD *)this + 136, (int)a2 + 544);
  sub_1006EC60((_DWORD *)this + 140, (int)a2 + 560);
  sub_1000D900((_DWORD *)this + 144, (int)a2 + 576);
  *((_DWORD *)this + 148) = *((_DWORD *)a2 + 148);
  *((_DWORD *)this + 149) = *((_DWORD *)a2 + 149);
  *((_DWORD *)this + 150) = *((_DWORD *)a2 + 150);
  *((_DWORD *)this + 151) = *((_DWORD *)a2 + 151);
  *((_DWORD *)this + 152) = *((_DWORD *)a2 + 152);
  *((_DWORD *)this + 153) = *((_DWORD *)a2 + 153);
  *((_DWORD *)this + 154) = *((_DWORD *)a2 + 154);
  *((_DWORD *)this + 155) = *((_DWORD *)a2 + 155);
  *((_BYTE *)this + 624) = *((_BYTE *)a2 + 624);
  *((_BYTE *)this + 625) = *((_BYTE *)a2 + 625);
  *((_BYTE *)this + 626) = *((_BYTE *)a2 + 626);
  *((_BYTE *)this + 627) = *((_BYTE *)a2 + 627);
  *((_DWORD *)this + 157) = *((_DWORD *)a2 + 157);
  *((_DWORD *)this + 158) = *((_DWORD *)a2 + 158);
  return this;
}
