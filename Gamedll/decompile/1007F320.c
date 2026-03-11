/*
 * func-name: ?RefreshOptions@Effect_DynamicLasers@@UAEXXZ_0
 * func-address: 0x1007f320
 * callers: 0x1001631a
 * callees: 0x100024e1
 */

void __thiscall Effect_DynamicLasers::RefreshOptions(Effect_DynamicLasers *this)
{
  int v2; // edi
  float v3; // [esp+8h] [ebp-4h]

  v2 = *((_DWORD *)this + 263);
  if ( v2 )
  {
    *(_DWORD *)(v2 + 224) = *((_DWORD *)this + 273);
    DynamicLasers::SetMaxNodes((DynamicLasers *)v2, *((_DWORD *)this + 286));
    v3 = *((float *)this + 289);
    *(float *)(v2 + 240) = *((float *)this + 288);
    *(float *)(v2 + 244) = v3;
    *(float *)(v2 + 232) = *((float *)this + 285);
    *(float *)(v2 + 236) = *((float *)this + 287);
    Effect_Base::RefreshOptions(this);
  }
}
