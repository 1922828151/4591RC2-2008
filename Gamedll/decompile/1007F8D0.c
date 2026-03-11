/*
 * func-name: ?DeserializationComplete@Effect_DynamicLasers@@UAEXXZ_0
 * func-address: 0x1007f8d0
 * callers: 0x10012dcd
 * callees: 0x10005646, 0x10017e95, 0x1001a875, 0x102c9d98
 */

void __thiscall Effect_DynamicLasers::DeserializationComplete(Effect_DynamicLasers *this)
{
  double v2; // st7
  int v3; // ecx
  int v4; // eax
  int v5; // eax
  int v6; // edx
  int v7; // ecx
  int v8; // eax
  void *v9; // edx
  int v10; // [esp-4h] [ebp-38h] BYREF
  int v11; // [esp+0h] [ebp-34h]
  int v12; // [esp+4h] [ebp-30h]
  int v13; // [esp+8h] [ebp-2Ch]
  int v14; // [esp+Ch] [ebp-28h]
  int v15; // [esp+10h] [ebp-24h]
  int v16; // [esp+14h] [ebp-20h]
  int *v17; // [esp+24h] [ebp-10h]
  int v18; // [esp+30h] [ebp-4h]

  if ( !*((_DWORD *)this + 263) )
  {
    v17 = (int *)operator new(0x110u);
    v18 = 0;
    if ( v17 )
    {
      v2 = *((float *)this + 280);
      v3 = *((_DWORD *)this + 284);
      v16 = *((_DWORD *)this + 273);
      v15 = v3;
      *(float *)&v14 = v2;
      v13 = *((int *)this + 279);
      v12 = *((int *)this + 287);
      v11 = *((int *)this + 285);
      v4 = sub_10005646();
      v5 = DynamicLasers::DynamicLasers(
             *((_DWORD *)this + 178),
             *((_DWORD *)this + 286),
             v4,
             (int)this + 856,
             v11,
             v12,
             v13,
             v14,
             v15,
             v16);
    }
    else
    {
      v5 = 0;
    }
    v6 = *((_DWORD *)this + 214);
    v7 = *((_DWORD *)this + 216);
    *((_DWORD *)this + 263) = v5;
    v8 = *((_DWORD *)this + 215);
    *((_DWORD *)this + 290) = v6;
    *((_DWORD *)this + 291) = v8;
    v18 = -1;
    *((_DWORD *)this + 292) = v7;
  }
  v9 = (void *)(*((_DWORD *)this + 284) + 100);
  v17 = &v10;
  std::string::string(&v10, v9);
  Precacher::UpdateTexture(*((_DWORD *)this + 284));
  Effect_Base::DeserializationComplete(this);
}
