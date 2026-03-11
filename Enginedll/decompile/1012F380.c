/*
 * func-name: ?AddBiasLightColor@SkyController@@QAE_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAVVector@@@Z
 * func-address: 0x1012f380
 * callers: none
 * callees: 0x10131fd0, 0x101326d0
 */

char __thiscall SkyController::AddBiasLightColor(
        char *this,
        char a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        _DWORD *a9)
{
  char *v9; // esi
  char *v10; // edi
  _DWORD *v11; // ebp
  _DWORD *v12; // ebx
  _DWORD *v13; // eax
  _DWORD *v14; // eax
  _DWORD *v15; // ecx
  char *v17; // [esp+10h] [ebp-14h] BYREF
  _DWORD *v18; // [esp+14h] [ebp-10h]
  int v19; // [esp+20h] [ebp-4h]

  v9 = this + 1292;
  v19 = 0;
  sub_10131FD0(&v17, &a2);
  v10 = v17;
  v11 = (_DWORD *)*((_DWORD *)v9 + 1);
  if ( !v17 || v17 != v9 )
    invalid_parameter_noinfo();
  v12 = v18;
  if ( v18 == v11 )
  {
    v14 = (_DWORD *)sub_101326D0(&a2);
    v15 = a9;
    *v14 = *a9;
    v14[1] = v15[1];
    v14[2] = v15[2];
  }
  else
  {
    if ( !v10 )
      invalid_parameter_noinfo();
    if ( v12 == *((_DWORD **)v10 + 1) )
      invalid_parameter_noinfo();
    v13 = a9;
    v12[10] = *a9;
    v12[11] = v13[1];
    v12[12] = v13[2];
  }
  v19 = -1;
  std::string::~string(&a2);
  return 1;
}
