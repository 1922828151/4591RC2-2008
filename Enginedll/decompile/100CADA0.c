/*
 * func-name: ??0CREDialog@@QAE@XZ
 * func-address: 0x100cada0
 * callers: 0x100ccaf0
 * callees: 0x100b7400, 0x100d46f0
 */

CREDialog *__thiscall CREDialog::CREDialog(CREDialog *this)
{
  char *v2; // eax
  int i; // ecx

  sub_100D46F0();
  *(_DWORD *)this = &CREDialog::`vftable';
  *((_BYTE *)this + 100) = 0;
  std::wstring::wstring((char *)this + 104);
  *((_DWORD *)this + 37) = 0;
  *((_DWORD *)this + 42) = 1;
  *((_DWORD *)this + 185) = 0;
  *((_DWORD *)this + 186) = 0;
  *((_DWORD *)this + 187) = 0;
  *((_DWORD *)this + 188) = 0;
  *((_DWORD *)this + 189) = 0;
  *((_DWORD *)this + 190) = 0;
  *((_DWORD *)this + 191) = 0;
  *((_DWORD *)this + 192) = 0;
  *((_DWORD *)this + 193) = 0;
  *((_DWORD *)this + 194) = 0;
  *((_DWORD *)this + 195) = 0;
  *((_DWORD *)this + 196) = 0;
  *((_BYTE *)this + 816) = 0;
  *((_DWORD *)this + 197) = -1;
  *((_BYTE *)this + 1012) = 0;
  *((_DWORD *)this + 246) = -1;
  *((_BYTE *)this + 1208) = 0;
  *((_DWORD *)this + 295) = -1;
  v2 = (char *)this + 1376;
  for ( i = 11; i >= 0; --i )
  {
    v2[28] = 0;
    *(_DWORD *)v2 = -1;
    v2 += 196;
  }
  *((_DWORD *)this + 935) = 0;
  *((_DWORD *)this + 936) = 0;
  *((_DWORD *)this + 937) = 0;
  *((double *)this + 20) = 0.0;
  *((float *)this + 23) = 1.0;
  *((_DWORD *)this + 20) = -1;
  *((float *)this + 24) = 1.0;
  *((_DWORD *)this + 173) = 0;
  *((_DWORD *)this + 174) = 0;
  *((_DWORD *)this + 175) = 0;
  *((_DWORD *)this + 176) = 0;
  *((_DWORD *)this + 179) = 0;
  *((_BYTE *)this + 60) = 0;
  *((_BYTE *)this + 61) = 1;
  *((_BYTE *)this + 176) = 0;
  *((_BYTE *)this + 177) = 0;
  *((_WORD *)this + 90) = 0;
  *((_DWORD *)this + 177) = 24;
  *((_DWORD *)this + 178) = 16;
  *((_DWORD *)this + 180) = 0;
  *((_DWORD *)this + 181) = 0;
  *((_DWORD *)this + 182) = 0;
  *((_DWORD *)this + 183) = 0;
  *((_DWORD *)this + 184) = 0;
  *((_DWORD *)this + 43) = 0;
  *((_DWORD *)this + 932) = this;
  *((_DWORD *)this + 933) = this;
  *((_DWORD *)this + 38) = 0xFFFF;
  *((_BYTE *)this + 84) = 0;
  *((_BYTE *)this + 85) = 0;
  *((_BYTE *)this + 86) = 1;
  *((_BYTE *)this + 62) = 1;
  CREDialog::InitDefaultElements(this);
  return this;
}
