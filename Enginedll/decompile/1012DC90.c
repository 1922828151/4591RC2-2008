/*
 * func-name: ?DelBiasLightIntensity@SkyController@@QAE_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x1012dc90
 * callers: none
 * callees: 0x10058270, 0x10132040
 */

char __thiscall SkyController::DelBiasLightIntensity(
        _DWORD *this,
        char a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  _DWORD *v8; // esi
  int v9; // edi
  int v10; // ebx
  _DWORD *v12; // [esp+Ch] [ebp-14h] BYREF
  int v13; // [esp+10h] [ebp-10h]
  int v14; // [esp+1Ch] [ebp-4h]

  v8 = this + 326;
  v14 = 0;
  sub_10132040(&v12, &a2);
  v9 = (int)v12;
  v10 = v8[1];
  if ( !v12 || v12 != v8 )
    invalid_parameter_noinfo();
  if ( v13 == v10 )
  {
    v14 = -1;
    std::string::~string(&a2);
    return 0;
  }
  else
  {
    sub_10058270(v8, &v12, v9, v13);
    v14 = -1;
    std::string::~string(&a2);
    return 1;
  }
}
