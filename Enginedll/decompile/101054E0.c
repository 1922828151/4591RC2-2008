/*
 * func-name: ??0PostProcessEffect_Permanent@@QAE@ABV0@@Z
 * func-address: 0x101054e0
 * callers: none
 * callees: 0x10105280
 */

PostProcessEffect_Permanent *__thiscall PostProcessEffect_Permanent::PostProcessEffect_Permanent(
        PostProcessEffect_Permanent *this,
        const struct PostProcessEffect_Permanent *a2)
{
  PostProcessEffect::PostProcessEffect(this, a2);
  *(_DWORD *)this = &PostProcessEffect_Permanent::`vftable';
  return this;
}
