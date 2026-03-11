/*
 * func-name: ??4Editor@@QAEAAV0@ABV0@@Z
 * func-address: 0x100154c0
 * callers: none
 * callees: 0x1000b110, 0x1000d550, 0x1000f220, 0x10011510, 0x10013320, 0x10013c80, 0x10013d90, 0x100149d0
 */

int __thiscall Editor::operator=(int this, int a2)
{
  _DWORD *v5; // [esp+14h] [ebp-4h]
  _DWORD *v6; // [esp+14h] [ebp-4h]
  _DWORD *v7; // [esp+1Ch] [ebp+4h]
  _DWORD *v8; // [esp+1Ch] [ebp+4h]

  *(_DWORD *)(this + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(this + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(this + 12) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(this + 16) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(this + 20) = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(this + 24) = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(this + 28) = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(this + 32) = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(this + 36) = *(_DWORD *)(a2 + 36);
  *(_DWORD *)(this + 40) = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(this + 44) = *(_DWORD *)(a2 + 44);
  *(_DWORD *)(this + 48) = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(this + 52) = *(_DWORD *)(a2 + 52);
  *(_DWORD *)(this + 56) = *(_DWORD *)(a2 + 56);
  *(_BYTE *)(this + 60) = *(_BYTE *)(a2 + 60);
  *(_DWORD *)(this + 64) = *(_DWORD *)(a2 + 64);
  *(_DWORD *)(this + 68) = *(_DWORD *)(a2 + 68);
  Texture::operator=(this + 72, a2 + 72);
  *(_DWORD *)(this + 228) = *(_DWORD *)(a2 + 228);
  *(_BYTE *)(this + 232) = *(_BYTE *)(a2 + 232);
  *(float *)(this + 236) = *(float *)(a2 + 236);
  *(float *)(this + 240) = *(float *)(a2 + 240);
  *(float *)(this + 244) = *(float *)(a2 + 244);
  *(_DWORD *)(this + 248) = *(_DWORD *)(a2 + 248);
  Camera::operator=(this + 252, a2 + 252);
  Camera::operator=(this + 672, a2 + 672);
  Gizmo::operator=((_DWORD *)(this + 1104), (_DWORD *)(a2 + 1104));
  *(_DWORD *)(this + 2048) = *(_DWORD *)(a2 + 2048);
  *(_DWORD *)(this + 2052) = *(_DWORD *)(a2 + 2052);
  *(_BYTE *)(this + 2056) = *(_BYTE *)(a2 + 2056);
  *(_BYTE *)(this + 2057) = *(_BYTE *)(a2 + 2057);
  *(_BYTE *)(this + 2058) = *(_BYTE *)(a2 + 2058);
  *(_BYTE *)(this + 2059) = *(_BYTE *)(a2 + 2059);
  *(_BYTE *)(this + 2060) = *(_BYTE *)(a2 + 2060);
  *(_DWORD *)(this + 2064) = *(_DWORD *)(a2 + 2064);
  *(_DWORD *)(this + 2068) = *(_DWORD *)(a2 + 2068);
  *(_BYTE *)(this + 2072) = *(_BYTE *)(a2 + 2072);
  *(_BYTE *)(this + 2073) = *(_BYTE *)(a2 + 2073);
  *(_BYTE *)(this + 2074) = *(_BYTE *)(a2 + 2074);
  *(_BYTE *)(this + 2075) = *(_BYTE *)(a2 + 2075);
  *(_BYTE *)(this + 2076) = *(_BYTE *)(a2 + 2076);
  *(_BYTE *)(this + 2077) = *(_BYTE *)(a2 + 2077);
  *(_DWORD *)(this + 2080) = *(_DWORD *)(a2 + 2080);
  *(_BYTE *)(this + 2084) = *(_BYTE *)(a2 + 2084);
  *(_BYTE *)(this + 2085) = *(_BYTE *)(a2 + 2085);
  *(_BYTE *)(this + 2086) = *(_BYTE *)(a2 + 2086);
  *(float *)(this + 2088) = *(float *)(a2 + 2088);
  *(_DWORD *)(this + 2092) = *(_DWORD *)(a2 + 2092);
  *(_BYTE *)(this + 2096) = *(_BYTE *)(a2 + 2096);
  *(float *)(this + 2100) = *(float *)(a2 + 2100);
  *(_DWORD *)(this + 2104) = *(_DWORD *)(a2 + 2104);
  *(_BYTE *)(this + 2108) = *(_BYTE *)(a2 + 2108);
  *(float *)(this + 2112) = *(float *)(a2 + 2112);
  *(_BYTE *)(this + 2116) = *(_BYTE *)(a2 + 2116);
  *(_BYTE *)(this + 2117) = *(_BYTE *)(a2 + 2117);
  *(_BYTE *)(this + 2118) = *(_BYTE *)(a2 + 2118);
  *(_BYTE *)(this + 2119) = *(_BYTE *)(a2 + 2119);
  *(_BYTE *)(this + 2120) = *(_BYTE *)(a2 + 2120);
  *(_BYTE *)(this + 2121) = *(_BYTE *)(a2 + 2121);
  *(_BYTE *)(this + 2122) = *(_BYTE *)(a2 + 2122);
  *(float *)(this + 2124) = *(float *)(a2 + 2124);
  *(float *)(this + 2128) = *(float *)(a2 + 2128);
  *(_DWORD *)(this + 2132) = *(_DWORD *)(a2 + 2132);
  *(_DWORD *)(this + 2136) = *(_DWORD *)(a2 + 2136);
  *(_DWORD *)(this + 2140) = *(_DWORD *)(a2 + 2140);
  if ( this + 2144 != a2 + 2144 )
  {
    v7 = *(_DWORD **)(a2 + 2148);
    v5 = (_DWORD *)*v7;
    sub_10013C80((_DWORD *)(this + 2144));
    sub_10013D90(
      (_DWORD *)(this + 2144),
      this + 2144,
      **(_DWORD **)(this + 2148),
      a2 + 2144,
      v5,
      a2 + 2144,
      v7,
      (int)v7);
  }
  if ( this + 2156 != a2 + 2156 )
  {
    v8 = *(_DWORD **)(a2 + 2160);
    v6 = (_DWORD *)*v8;
    sub_10013C80((_DWORD *)(this + 2156));
    sub_10013D90(
      (_DWORD *)(this + 2156),
      this + 2156,
      **(_DWORD **)(this + 2160),
      a2 + 2156,
      v6,
      a2 + 2156,
      v8,
      (int)v8);
  }
  *(_BYTE *)(this + 2168) = *(_BYTE *)(a2 + 2168);
  std::string::operator=(this + 2172, a2 + 2172);
  std::string::operator=(this + 2200, a2 + 2200);
  sub_10011510(this + 2228, a2 + 2228);
  std::vector<Actor *>::operator=(this + 2244, a2 + 2244);
  sub_100149D0((int *)(this + 2260), (int *)(a2 + 2260));
  *(_DWORD *)(this + 2276) = *(_DWORD *)(a2 + 2276);
  return this;
}
