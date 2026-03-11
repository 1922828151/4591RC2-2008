/*
 * func-name: ?LoadModel@Serializer@@QAE_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVStaticModel@@@Z
 * func-address: 0x1011b080
 * callers: 0x100ef9b0
 * callees: 0x1000e6c0, 0x10097220, 0x100977a0, 0x10097800, 0x1011aa80, 0x1011f300, 0x1017aa70
 */

char __thiscall Serializer::LoadModel(void *this, char a2, int a3, int a4, int a5, int a6, int a7, int a8, int *a9)
{
  OBJLoad *Loader; // esi
  const char *v11; // eax
  const char *v13; // eax
  int v14; // [esp-Ch] [ebp-38h] BYREF
  int v15; // [esp-8h] [ebp-34h] BYREF
  int v16; // [esp-4h] [ebp-30h]
  int v17; // [esp+0h] [ebp-2Ch]
  int v18; // [esp+4h] [ebp-28h]
  int v19; // [esp+8h] [ebp-24h]
  int v20; // [esp+Ch] [ebp-20h]
  int *v21; // [esp+10h] [ebp-1Ch]
  int *v22; // [esp+1Ch] [ebp-10h]
  int v23; // [esp+28h] [ebp-4h]

  v23 = 0;
  sub_1017AA70();
  v22 = &v15;
  std::string::string(&v15, &a2);
  Loader = Serializer::GetLoader(v15, v16, v17, v18, v19, v20, (int)v21);
  if ( Loader )
  {
    if ( FindMedia((int)&a2, (int)"Models", 0, 0) )
    {
      v21 = a9;
      a9 = &v14;
      std::string::string(&v14, &a2);
      if ( (*(unsigned __int8 (__thiscall **)(OBJLoad *, int, int, int, int, int, int, int, int *))(*(_DWORD *)Loader + 4))(
             Loader,
             v14,
             v15,
             v16,
             v17,
             v18,
             v19,
             v20,
             v21) )
      {
        sub_1000E6C0((int)this, (int)Loader + 12);
        sub_1011F300(Loader, 1);
        v23 = -1;
        std::string::~string(&a2);
        return 1;
      }
    }
    else
    {
      v13 = (const char *)std::string::c_str(&a2);
      Warning("Couldn't find file '%s'", v13);
    }
  }
  else
  {
    v11 = (const char *)std::string::c_str(&a2);
    SeriousWarning("No compatible load serializer for '%s' model.", v11);
  }
  v23 = -1;
  std::string::~string(&a2);
  return 0;
}
