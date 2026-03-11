/*
 * func-name: ??0PostProcessEffect_Permanent@@QAE@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0H_N1@Z
 * func-address: 0x10108190
 * callers: 0x10108250
 * callees: 0x10106b20, 0x10106ce0, 0x10108110
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
        int a17,
        int a18)
{
  int v19; // edx
  PostProcess *v20; // eax
  char v22; // [esp-38h] [ebp-54h] BYREF
  int v23; // [esp-34h] [ebp-50h]
  int v24; // [esp-30h] [ebp-4Ch]
  int v25; // [esp-2Ch] [ebp-48h]
  int v26; // [esp-28h] [ebp-44h]
  int v27; // [esp-24h] [ebp-40h]
  int v28; // [esp-20h] [ebp-3Ch]
  char v29; // [esp-1Ch] [ebp-38h] BYREF
  int v30; // [esp-18h] [ebp-34h]
  int v31; // [esp-14h] [ebp-30h]
  int v32; // [esp-10h] [ebp-2Ch]
  struct PostProcessEffect *v33; // [esp-Ch] [ebp-28h]
  int v34; // [esp-8h] [ebp-24h]
  int v35; // [esp-4h] [ebp-20h]
  struct PostProcessEffect *v36; // [esp+4h] [ebp-18h]
  char *v37; // [esp+8h] [ebp-14h]
  char *v38; // [esp+Ch] [ebp-10h]
  int v39; // [esp+18h] [ebp-4h]

  v36 = this;
  v37 = &v29;
  v39 = 1;
  std::string::string(&v29, &a9);
  v38 = &v22;
  LOBYTE(v39) = 2;
  std::string::string(&v22, &a2);
  LOBYTE(v39) = 1;
  PostProcessEffect::PostProcessEffect(
    (int)this,
    v19,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    (int)v33,
    v34,
    v35);
  v35 = a16;
  v34 = a17;
  v33 = this;
  LOBYTE(v39) = 3;
  *(_DWORD *)this = &PostProcessEffect_Permanent::`vftable';
  v20 = PostProcess::Instance();
  PostProcess::AddPostProcessEffect(v20, v33, v34, v35);
  LOBYTE(v39) = 0;
  std::string::~string(&a2);
  v39 = -1;
  std::string::~string(&a9);
  return this;
}
