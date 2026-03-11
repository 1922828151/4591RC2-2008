/*
 * func-name: ??0PostProcessEffect_Permanent@@QAE@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0_NH@Z
 * func-address: 0x101083b0
 * callers: none
 * callees: 0x10106b20, 0x10106ce0, 0x10108110, 0x10109910
 */

struct PostProcessEffect *__thiscall PostProcessEffect_Permanent::PostProcessEffect_Permanent(
        struct PostProcessEffect *this,
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
        int a16,
        int a17)
{
  int v18; // edx
  unsigned int v19; // edi
  char *v20; // ecx
  void (__cdecl *v21)(); // ebx
  unsigned int v22; // esi
  char *v23; // ecx
  char *v24; // ecx
  int v25; // ebx
  _BYTE *v26; // ecx
  PostProcess *v27; // eax
  char v29; // [esp-38h] [ebp-60h] BYREF
  int v30; // [esp-34h] [ebp-5Ch]
  int v31; // [esp-30h] [ebp-58h]
  int v32; // [esp-2Ch] [ebp-54h]
  int v33; // [esp-28h] [ebp-50h]
  int v34; // [esp-24h] [ebp-4Ch]
  int v35; // [esp-20h] [ebp-48h]
  char v36; // [esp-1Ch] [ebp-44h] BYREF
  int v37; // [esp-18h] [ebp-40h]
  int v38; // [esp-14h] [ebp-3Ch]
  int v39; // [esp-10h] [ebp-38h]
  struct PostProcessEffect *v40; // [esp-Ch] [ebp-34h]
  int v41; // [esp-8h] [ebp-30h]
  int v42; // [esp-4h] [ebp-2Ch]
  struct PostProcessEffect *v43; // [esp+10h] [ebp-18h]
  char *v44; // [esp+14h] [ebp-14h]
  char *v45; // [esp+18h] [ebp-10h]
  int v46; // [esp+24h] [ebp-4h]

  v43 = this;
  v44 = &v36;
  v46 = 1;
  std::string::string(&v36, &a9);
  v45 = &v29;
  LOBYTE(v46) = 2;
  std::string::string(&v29, &a2);
  LOBYTE(v46) = 1;
  PostProcessEffect::PostProcessEffect(
    (int)this,
    v18,
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
    (int)v40,
    v41,
    v42);
  *(_DWORD *)this = &PostProcessEffect_Permanent::`vftable';
  LOBYTE(v46) = 3;
  if ( dword_11240FFC )
    v19 = (dword_11241000 - (int)dword_11240FFC) >> 6;
  else
    v19 = 0;
  sub_10109910((int)&PostProcessEffect_Permanent::PostProcessEffect_Permanent_Infos, v19 + 1);
  v20 = (char *)dword_11240FFC;
  if ( dword_11240FFC && v19 < (dword_11241000 - (int)dword_11240FFC) >> 6 )
  {
    v21 = invalid_parameter_noinfo;
  }
  else
  {
    v21 = invalid_parameter_noinfo;
    invalid_parameter_noinfo();
    v20 = (char *)dword_11240FFC;
  }
  v22 = v19 << 6;
  std::string::operator=(&v20[64 * v19], &a2);
  v23 = (char *)dword_11240FFC;
  if ( !dword_11240FFC || v19 >= (dword_11241000 - (int)dword_11240FFC) >> 6 )
  {
    v21();
    v23 = (char *)dword_11240FFC;
  }
  std::string::operator=(&v23[v22 + 28], &a9);
  v24 = (char *)dword_11240FFC;
  if ( !dword_11240FFC || v19 >= (dword_11241000 - (int)dword_11240FFC) >> 6 )
  {
    v21();
    v24 = (char *)dword_11240FFC;
  }
  v25 = a17;
  *(_DWORD *)&v24[v22 + 56] = a17;
  v26 = dword_11240FFC;
  if ( !dword_11240FFC || v19 >= (dword_11241000 - (int)dword_11240FFC) >> 6 )
  {
    invalid_parameter_noinfo();
    v26 = dword_11240FFC;
  }
  v42 = v25;
  v41 = a16;
  v40 = this;
  v26[v22 + 60] = a16;
  v27 = PostProcess::Instance();
  PostProcess::AddPostProcessEffect(v27, v40, v41, v42);
  LOBYTE(v46) = 0;
  std::string::~string(&a2);
  v46 = -1;
  std::string::~string(&a9);
  return this;
}
