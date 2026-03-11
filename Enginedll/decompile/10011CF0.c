/*
 * func-name: ?FlushBatches@FXManager@@QAEXXZ
 * func-address: 0x10011cf0
 * callers: none
 * callees: 0x1006d030
 */

void __thiscall FXManager::FlushBatches(FXManager *this)
{
  unsigned int v1; // eax
  void *v2; // ecx
  int v3; // edi
  void *v4; // esi
  unsigned int v5; // eax
  void *v6; // ecx
  int v7; // edi
  void *v8; // esi

  v1 = dword_1123D690;
  v2 = dword_1123D68C;
  v3 = dword_1123D690;
  if ( (unsigned int)dword_1123D68C > dword_1123D690 )
  {
    invalid_parameter_noinfo();
    v1 = dword_1123D690;
    v2 = dword_1123D68C;
  }
  v4 = v2;
  if ( (unsigned int)v2 > v1 )
  {
    invalid_parameter_noinfo();
    v1 = dword_1123D690;
  }
  if ( v4 != (void *)v3 )
    dword_1123D690 = sub_1006D030(v3, v1, v4);
  v5 = dword_1123D6A0;
  v6 = dword_1123D69C;
  v7 = dword_1123D6A0;
  if ( (unsigned int)dword_1123D69C > dword_1123D6A0 )
  {
    invalid_parameter_noinfo();
    v5 = dword_1123D6A0;
    v6 = dword_1123D69C;
  }
  v8 = v6;
  if ( (unsigned int)v6 > v5 )
  {
    invalid_parameter_noinfo();
    v5 = dword_1123D6A0;
  }
  if ( v8 != (void *)v7 )
    dword_1123D6A0 = sub_1006D030(v7, v5, v8);
}
