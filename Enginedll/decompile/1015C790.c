/*
 * func-name: ?Register@SubareaManager@@QAE_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAVVector@@1PAVActor@@@Z
 * func-address: 0x1015c790
 * callers: 0x10045740
 * callees: 0x10001370, 0x10037230, 0x1015c930, 0x1015cf00, 0x1017a0b0, 0x101a2500
 */

char __thiscall SubareaManager::Register(
        int this,
        char a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        float *a9,
        float *a10,
        int a11)
{
  bool v12; // zf
  int v13; // eax
  float *v14; // eax
  char v16; // [esp-1Ch] [ebp-ACh] BYREF
  int v17; // [esp-18h] [ebp-A8h]
  int v18; // [esp-14h] [ebp-A4h]
  int v19; // [esp-10h] [ebp-A0h]
  int v20; // [esp-Ch] [ebp-9Ch]
  int v21; // [esp-8h] [ebp-98h]
  int v22; // [esp-4h] [ebp-94h]
  char *v23; // [esp+8h] [ebp-88h]
  float v24[10]; // [esp+Ch] [ebp-84h] BYREF
  int v25; // [esp+34h] [ebp-5Ch] BYREF
  _BYTE v26[4]; // [esp+38h] [ebp-58h] BYREF
  int v27; // [esp+3Ch] [ebp-54h]
  int v28; // [esp+40h] [ebp-50h]
  int v29; // [esp+44h] [ebp-4Ch]
  int v30; // [esp+48h] [ebp-48h]
  int v31; // [esp+4Ch] [ebp-44h]
  int v32; // [esp+50h] [ebp-40h]
  int v33; // [esp+54h] [ebp-3Ch]
  int v34; // [esp+58h] [ebp-38h]
  int v35; // [esp+5Ch] [ebp-34h]
  void *v36; // [esp+68h] [ebp-28h]
  int v37; // [esp+6Ch] [ebp-24h]
  int v38; // [esp+70h] [ebp-20h]
  int v39; // [esp+74h] [ebp-1Ch]
  int v40; // [esp+78h] [ebp-18h]
  int v41; // [esp+80h] [ebp-10h]
  int v42; // [esp+8Ch] [ebp-4h]

  v12 = *(_DWORD *)(this + 28) == 0;
  v42 = 0;
  if ( !v12 && *(_DWORD *)(this + 24) )
  {
    sub_1015C930(&v25);
    v13 = *(_DWORD *)(this + 76);
    LOBYTE(v42) = 1;
    if ( v13 )
    {
      if ( v13 == 1 )
      {
        v39 = 0;
        v40 = 0;
      }
    }
    else
    {
      v23 = &v16;
      std::string::string(&v16, &a2);
      v39 = sub_10037230(*(_DWORD **)(this + 108), v16, v17, v18, v19, v20, v21, v22);
      v40 = -1;
    }
    v25 = a11;
    v14 = sub_10001370(v24, a9, a10);
    v27 = *((_DWORD *)v14 + 1);
    v28 = *((_DWORD *)v14 + 2);
    v29 = *((_DWORD *)v14 + 3);
    v30 = *((_DWORD *)v14 + 4);
    v31 = *((_DWORD *)v14 + 5);
    v32 = *((_DWORD *)v14 + 6);
    v33 = *((_DWORD *)v14 + 7);
    v34 = *((_DWORD *)v14 + 8);
    v35 = *((_DWORD *)v14 + 9);
    sub_1017A0B0(v24);
    v41 = 0;
    sub_1015CF00(this + 4, &v25);
    LOBYTE(v42) = 0;
    if ( v36 )
      operator delete(v36);
    v36 = 0;
    v37 = 0;
    v38 = 0;
    sub_1017A0B0(v26);
  }
  v42 = -1;
  std::string::~string(&a2);
  return 0;
}
