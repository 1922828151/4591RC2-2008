/*
 * func-name: ?AddPostProcessEffect@PostProcess@@QAEPAVPostProcessEffect@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0_NH@Z
 * func-address: 0x10107ff0
 * callers: 0x10108550, 0x10131750
 * callees: 0x10106ce0, 0x10109480, 0x101097a0, 0x101a2534
 */

int __thiscall PostProcess::AddPostProcessEffect(
        _DWORD *this,
        char a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        char a16,
        int a17)
{
  void *v18; // esi
  int v19; // edx
  int v20; // ebp
  int v21; // ebx
  bool v22; // zf
  int v23; // esi
  unsigned int v24; // edi
  void *v25; // edi
  char v27; // [esp-38h] [ebp-64h] BYREF
  int v28; // [esp-34h] [ebp-60h]
  int v29; // [esp-30h] [ebp-5Ch]
  int v30; // [esp-2Ch] [ebp-58h]
  int v31; // [esp-28h] [ebp-54h]
  int v32; // [esp-24h] [ebp-50h]
  int v33; // [esp-20h] [ebp-4Ch]
  char v34; // [esp-1Ch] [ebp-48h] BYREF
  int v35; // [esp-18h] [ebp-44h]
  int v36; // [esp-14h] [ebp-40h]
  int v37; // [esp-10h] [ebp-3Ch]
  int v38; // [esp-Ch] [ebp-38h]
  int v39; // [esp-8h] [ebp-34h]
  int v40; // [esp-4h] [ebp-30h]
  int v41[2]; // [esp+10h] [ebp-1Ch] BYREF
  int v42[2]; // [esp+18h] [ebp-14h] BYREF
  int v43; // [esp+28h] [ebp-4h]

  v43 = 2;
  v18 = operator new(0x1F0u);
  v41[0] = (int)v18;
  if ( v18 )
  {
    v41[1] = (int)&v34;
    std::string::string(&v34, &a9);
    v42[0] = (int)&v27;
    LOBYTE(v43) = 3;
    std::string::string(&v27, &a2);
    LOBYTE(v43) = 2;
    v20 = PostProcessEffect::PostProcessEffect(
            (int)v18,
            v19,
            v27,
            v28,
            v29,
            v30,
            v31,
            v32,
            v33,
            v34,
            v35,
            v36,
            v37,
            v38,
            v39,
            v40);
  }
  else
  {
    v20 = 0;
  }
  v21 = a17;
  v22 = a17 == -1;
  LOBYTE(v43) = 1;
  v41[0] = v20;
  *(_BYTE *)(v20 + 15) = a16;
  if ( v22 )
  {
    sub_101097A0((int)(this + 16), (int)v41);
  }
  else
  {
    v23 = (int)(this + 16);
    v24 = this[17];
    if ( v24 > *(_DWORD *)(v23 + 8) )
      invalid_parameter_noinfo();
    v42[1] = v24;
    v25 = (void *)(v24 + 4 * v21);
    if ( (unsigned int)v25 > *(_DWORD *)(v23 + 8) || (unsigned int)v25 < *(_DWORD *)(v23 + 4) )
      invalid_parameter_noinfo();
    sub_10109480((int)v42, v23, v25, (int)v41);
  }
  LOBYTE(v43) = 0;
  std::string::~string(&a2);
  v43 = -1;
  std::string::~string(&a9);
  return v20;
}
