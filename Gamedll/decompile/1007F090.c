/*
 * func-name: ??0Effect_DynamicLasers@@QAE@ABV0@@Z_0
 * func-address: 0x1007f090
 * callers: 0x10015fff
 * callees: 0x1000727a
 */

Effect_DynamicLasers *__thiscall Effect_DynamicLasers::Effect_DynamicLasers(
        Effect_DynamicLasers *this,
        const struct Effect_DynamicLasers *a2)
{
  Effect_Base::Effect_Base(this, a2);
  *(_DWORD *)this = &Effect_DynamicLasers::`vftable';
  *((_DWORD *)this + 284) = *((_DWORD *)a2 + 284);
  *((float *)this + 285) = *((float *)a2 + 285);
  *((_DWORD *)this + 286) = *((_DWORD *)a2 + 286);
  *((float *)this + 287) = *((float *)a2 + 287);
  *((float *)this + 288) = *((float *)a2 + 288);
  *((float *)this + 289) = *((float *)a2 + 289);
  *((_DWORD *)this + 290) = *((_DWORD *)a2 + 290);
  *((_DWORD *)this + 291) = *((_DWORD *)a2 + 291);
  *((_DWORD *)this + 292) = *((_DWORD *)a2 + 292);
  *((float *)this + 293) = *((float *)a2 + 293);
  return this;
}
