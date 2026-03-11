/*
 * func-name: ??0Editor@@QAE@XZ
 * func-address: 0x1008f370
 * callers: 0x101b7e20
 * callees: 0x1000bce0, 0x1000c620, 0x10063b20, 0x10118b80, 0x10136290
 */

Editor *__thiscall Editor::Editor(Editor *this)
{
  RenderBase::RenderBase(this);
  *(_DWORD *)this = &Editor::`vftable';
  Texture::Texture((Editor *)((char *)this + 72));
  Camera::Camera((Editor *)((char *)this + 252));
  Camera::Camera((Editor *)((char *)this + 672));
  Gizmo::Gizmo((Editor *)((char *)this + 1104));
  *((float *)this + 516) = 0.0;
  *((float *)this + 517) = 0.0;
  *((float *)this + 534) = 0.0;
  *((float *)this + 535) = 0.0;
  *((_DWORD *)this + 537) = sub_1000BCE0();
  *((_DWORD *)this + 538) = 0;
  *((_DWORD *)this + 540) = sub_1000BCE0();
  *((_DWORD *)this + 541) = 0;
  std::string::string((char *)this + 2172);
  std::string::string((char *)this + 2200);
  *((_DWORD *)this + 558) = 0;
  *((_DWORD *)this + 559) = 0;
  *((_DWORD *)this + 560) = 0;
  *((_DWORD *)this + 562) = 0;
  *((_DWORD *)this + 563) = 0;
  *((_DWORD *)this + 564) = 0;
  *((_DWORD *)this + 566) = 0;
  *((_DWORD *)this + 567) = 0;
  *((_DWORD *)this + 568) = 0;
  *((float *)this + 528) = 40.0;
  *((_BYTE *)this + 232) = 0;
  *((float *)this + 525) = 1.0;
  *((_BYTE *)this + 2108) = 0;
  *((_DWORD *)this + 526) = 0;
  *((_BYTE *)this + 2119) = 1;
  *((_BYTE *)this + 2118) = 1;
  *((_DWORD *)this + 57) = 1;
  *((_BYTE *)this + 2073) = 0;
  *((_BYTE *)this + 2057) = 1;
  *((_BYTE *)this + 2056) = 0;
  *((_BYTE *)this + 2058) = 0;
  *((_BYTE *)this + 2060) = 1;
  *((_BYTE *)this + 2086) = 1;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_BYTE *)this + 2168) = 0;
  *((float *)this + 152) = 5.0;
  *((_DWORD *)this + 512) = 0;
  *((_BYTE *)this + 2085) = 0;
  *((float *)this + 59) = 1.0;
  *((_DWORD *)this + 62) = 0;
  *((_DWORD *)this + 523) = 0;
  *((float *)this + 61) = 0.0;
  *((_BYTE *)this + 2077) = 0;
  *((_BYTE *)this + 2116) = 0;
  *((_BYTE *)this + 2117) = 0;
  *((float *)this + 531) = 1.0;
  *((_BYTE *)this + 2075) = 0;
  *((_BYTE *)this + 2121) = 0;
  *((float *)this + 522) = 1.0;
  *((_BYTE *)this + 2122) = 0;
  *((_DWORD *)this + 533) = 0;
  *((_BYTE *)this + 2084) = 0;
  *((_BYTE *)this + 2096) = 1;
  *((_BYTE *)this + 2120) = 1;
  *((_BYTE *)this + 2076) = 1;
  return this;
}
