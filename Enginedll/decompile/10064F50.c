/*
 * func-name: ?PrintStat@Canvas@@UAEXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HH_N@Z
 * func-address: 0x10064f50
 * callers: none
 * callees: none
 */

int __thiscall Canvas::PrintStat(
        _DWORD *this,
        char a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  int v12; // ebx
  double v13; // st7
  bool v14; // c0
  bool v15; // c3
  double v16; // st7
  int v17; // eax
  int v18; // ecx
  int v19; // edi
  int v20; // eax
  int v21; // ebx
  int v22; // eax
  bool v23; // sf
  int v24; // ebp
  void (__cdecl **v25)(_DWORD *, _DWORD, int, _DWORD, _DWORD, int, int); // edi
  int v26; // eax
  float v28; // [esp+0h] [ebp-2Ch]
  float v29; // [esp+4h] [ebp-28h]

  if ( flt_10280DF4 == -1.0 )
  {
    memset(dword_10284D60, 0, sizeof(dword_10284D60));
    memset(dword_10284E28, 0, sizeof(dword_10284E28));
  }
  v12 = dword_10284EF4;
  v13 = flt_10280DF4 + flt_10280DF0;
  v14 = GSeconds < v13;
  v15 = GSeconds == v13;
  v16 = GSeconds;
  if ( !v14 && !v15 )
  {
    v17 = dword_10284D60[this[12]];
    v18 = this[12];
    if ( v17 <= 0 || dword_10284EF4 <= 0 || (v19 = dword_10284C98[v18], v19 <= dword_10284EF4) )
      dword_10284E28[v18] = 0;
    else
      dword_10284E28[v18] = v17 / v19;
    dword_10284C98[this[12]] = 0;
    dword_10284D60[this[12]] = 0;
    if ( this[12] == v12 )
      flt_10280DF4 = v16;
  }
  v20 = this[12];
  if ( v20 > v12 )
    dword_10284EF4 = this[12];
  ++dword_10284C98[v20];
  v21 = a9;
  dword_10284D60[this[12]] += a9;
  if ( (_BYTE)a11 )
    v21 = dword_10284E28[this[12]];
  v22 = this[12] + 10;
  a9 = this[16] - 130;
  v23 = a10 < 0;
  v24 = -16711936;
  a11 = 15 * v22;
  if ( a10 > 0 )
  {
    if ( v21 > a10 )
      v24 = -65536;
    v23 = a10 < 0;
  }
  if ( v23 && v21 < -a10 )
    v24 = -65536;
  std::string::operator+=(&a2, ": %d");
  v25 = (void (__cdecl **)(_DWORD *, _DWORD, int, _DWORD, _DWORD, int, int))(*this + 44);
  v26 = std::string::c_str(&a2);
  v29 = (float)a11;
  v28 = (float)a9;
  (*v25)(this, 0, v24, LODWORD(v28), LODWORD(v29), v26, v21);
  ++this[12];
  return std::string::~string(&a2);
}
