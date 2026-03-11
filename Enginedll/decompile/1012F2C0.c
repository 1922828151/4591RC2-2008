/*
 * func-name: ?AddBiasFogStart@SkyController@@QAE_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@Z
 * func-address: 0x1012f2c0
 * callers: 0x1012f5d0
 * callees: 0x10132040, 0x101327b0
 */

char __thiscall SkyController::AddBiasFogStart(
        char *this,
        char a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        float a9)
{
  char *v9; // esi
  char *v10; // edi
  int v11; // ebx
  int v12; // ebp
  float *v13; // eax
  char *v15; // [esp+10h] [ebp-14h] BYREF
  int v16; // [esp+14h] [ebp-10h]
  int v17; // [esp+20h] [ebp-4h]

  v9 = this + 1280;
  v17 = 0;
  sub_10132040(&v15, &a2);
  v10 = v15;
  v11 = *((_DWORD *)v9 + 1);
  if ( !v15 || v15 != v9 )
    invalid_parameter_noinfo();
  v12 = v16;
  if ( v16 == v11 )
  {
    v13 = (float *)sub_101327B0(&a2);
    *v13 = a9;
  }
  else
  {
    if ( !v10 )
      invalid_parameter_noinfo();
    if ( v12 == *((_DWORD *)v10 + 1) )
      invalid_parameter_noinfo();
    *(float *)(v12 + 40) = a9;
  }
  v17 = -1;
  std::string::~string(&a2);
  return 1;
}
