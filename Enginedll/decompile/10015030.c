/*
 * func-name: ??0Editor@@QAE@ABV0@@Z
 * func-address: 0x10015030
 * callers: none
 * callees: 0x1000adf0, 0x1000d4b0, 0x1000f130, 0x1000f380, 0x10010f10, 0x10013b10, 0x10014ee0
 */

Editor *__thiscall Editor::Editor(Editor *this, const struct Editor *a2)
{
  *(_DWORD *)this = &Editor::`vftable';
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 3) = *((_DWORD *)a2 + 3);
  *((_DWORD *)this + 4) = *((_DWORD *)a2 + 4);
  *((_DWORD *)this + 5) = *((_DWORD *)a2 + 5);
  *((_DWORD *)this + 6) = *((_DWORD *)a2 + 6);
  *((_DWORD *)this + 7) = *((_DWORD *)a2 + 7);
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  *((_DWORD *)this + 9) = *((_DWORD *)a2 + 9);
  *((_DWORD *)this + 10) = *((_DWORD *)a2 + 10);
  *((_DWORD *)this + 11) = *((_DWORD *)a2 + 11);
  *((_DWORD *)this + 12) = *((_DWORD *)a2 + 12);
  *((_DWORD *)this + 13) = *((_DWORD *)a2 + 13);
  *((_DWORD *)this + 14) = *((_DWORD *)a2 + 14);
  *((_BYTE *)this + 60) = *((_BYTE *)a2 + 60);
  *((_DWORD *)this + 16) = *((_DWORD *)a2 + 16);
  *((_DWORD *)this + 17) = *((_DWORD *)a2 + 17);
  Texture::Texture((Editor *)((char *)this + 72), (const struct Editor *)((char *)a2 + 72));
  *((_DWORD *)this + 57) = *((_DWORD *)a2 + 57);
  *((_BYTE *)this + 232) = *((_BYTE *)a2 + 232);
  *((float *)this + 59) = *((float *)a2 + 59);
  *((float *)this + 60) = *((float *)a2 + 60);
  *((float *)this + 61) = *((float *)a2 + 61);
  *((_DWORD *)this + 62) = *((_DWORD *)a2 + 62);
  Camera::Camera((Editor *)((char *)this + 252), (const struct Editor *)((char *)a2 + 252));
  Camera::Camera((Editor *)((char *)this + 672), (const struct Editor *)((char *)a2 + 672));
  Gizmo::Gizmo((Editor *)((char *)this + 1104), (const struct Editor *)((char *)a2 + 1104));
  *((_DWORD *)this + 512) = *((_DWORD *)a2 + 512);
  *((_DWORD *)this + 513) = *((_DWORD *)a2 + 513);
  *((_BYTE *)this + 2056) = *((_BYTE *)a2 + 2056);
  *((_BYTE *)this + 2057) = *((_BYTE *)a2 + 2057);
  *((_BYTE *)this + 2058) = *((_BYTE *)a2 + 2058);
  *((_BYTE *)this + 2059) = *((_BYTE *)a2 + 2059);
  *((_BYTE *)this + 2060) = *((_BYTE *)a2 + 2060);
  *((_DWORD *)this + 516) = *((_DWORD *)a2 + 516);
  *((_DWORD *)this + 517) = *((_DWORD *)a2 + 517);
  *((_BYTE *)this + 2072) = *((_BYTE *)a2 + 2072);
  *((_BYTE *)this + 2073) = *((_BYTE *)a2 + 2073);
  *((_BYTE *)this + 2074) = *((_BYTE *)a2 + 2074);
  *((_BYTE *)this + 2075) = *((_BYTE *)a2 + 2075);
  *((_BYTE *)this + 2076) = *((_BYTE *)a2 + 2076);
  *((_BYTE *)this + 2077) = *((_BYTE *)a2 + 2077);
  *((_DWORD *)this + 520) = *((_DWORD *)a2 + 520);
  *((_BYTE *)this + 2084) = *((_BYTE *)a2 + 2084);
  *((_BYTE *)this + 2085) = *((_BYTE *)a2 + 2085);
  *((_BYTE *)this + 2086) = *((_BYTE *)a2 + 2086);
  *((float *)this + 522) = *((float *)a2 + 522);
  *((_DWORD *)this + 523) = *((_DWORD *)a2 + 523);
  *((_BYTE *)this + 2096) = *((_BYTE *)a2 + 2096);
  *((float *)this + 525) = *((float *)a2 + 525);
  *((_DWORD *)this + 526) = *((_DWORD *)a2 + 526);
  *((_BYTE *)this + 2108) = *((_BYTE *)a2 + 2108);
  *((float *)this + 528) = *((float *)a2 + 528);
  *((_BYTE *)this + 2116) = *((_BYTE *)a2 + 2116);
  *((_BYTE *)this + 2117) = *((_BYTE *)a2 + 2117);
  *((_BYTE *)this + 2118) = *((_BYTE *)a2 + 2118);
  *((_BYTE *)this + 2119) = *((_BYTE *)a2 + 2119);
  *((_BYTE *)this + 2120) = *((_BYTE *)a2 + 2120);
  *((_BYTE *)this + 2121) = *((_BYTE *)a2 + 2121);
  *((_BYTE *)this + 2122) = *((_BYTE *)a2 + 2122);
  *((float *)this + 531) = *((float *)a2 + 531);
  *((float *)this + 532) = *((float *)a2 + 532);
  *((_DWORD *)this + 533) = *((_DWORD *)a2 + 533);
  *((_DWORD *)this + 534) = *((_DWORD *)a2 + 534);
  *((_DWORD *)this + 535) = *((_DWORD *)a2 + 535);
  sub_10014EE0((_DWORD *)this + 536, (int)a2 + 2144);
  sub_10014EE0((_DWORD *)this + 539, (int)a2 + 2156);
  *((_BYTE *)this + 2168) = *((_BYTE *)a2 + 2168);
  std::string::string((char *)this + 2172, (char *)a2 + 2172);
  std::string::string((char *)this + 2200, (char *)a2 + 2200);
  sub_1000F380((int)this + 2228, (int)a2 + 2228);
  std::vector<Actor *>::vector<Actor *>((_DWORD *)this + 561, (int)a2 + 2244);
  sub_10013B10((int)this + 2260, (int)a2 + 2260);
  *((_DWORD *)this + 569) = *((_DWORD *)a2 + 569);
  return this;
}
