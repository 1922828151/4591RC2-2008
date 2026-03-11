/*
 * func-name: ?DeserializationComplete@Effect_Laser@@UAEXXZ_0
 * func-address: 0x10080b60
 * callers: 0x10016d65
 * callees: 0x10005646, 0x10012b70, 0x1001a875, 0x102c9d98
 */

void __thiscall Effect_Laser::DeserializationComplete(Effect_Laser *this)
{
  double v2; // st7
  int v3; // ecx
  int v4; // eax
  int v5; // eax
  void *v6; // edx
  _BYTE v7[16]; // [esp-10h] [ebp-38h] BYREF
  int v8; // [esp+0h] [ebp-28h]
  int v9; // [esp+4h] [ebp-24h]
  int v10; // [esp+8h] [ebp-20h]
  _BYTE *v11; // [esp+18h] [ebp-10h]
  int v12; // [esp+24h] [ebp-4h]

  if ( !*((_DWORD *)this + 263) )
  {
    v11 = operator new(0x104u);
    v12 = 0;
    if ( v11 )
    {
      v2 = *((float *)this + 284);
      v3 = *((_DWORD *)this + 285);
      v10 = *((_DWORD *)this + 273);
      v9 = v3;
      *(float *)&v8 = v2;
      v4 = sub_10005646();
      v5 = Laser::Laser(*((_DWORD *)this + 178), v4, (int)this + 1068, (int)this + 1080, v8, v9, v10);
    }
    else
    {
      v5 = 0;
    }
    v12 = -1;
    *((_DWORD *)this + 263) = v5;
    *((_BYTE *)this + 724) = 0;
  }
  v6 = (void *)(*((_DWORD *)this + 285) + 100);
  v11 = v7;
  std::string::string(v7, v6);
  Precacher::UpdateTexture(*((_DWORD *)this + 285));
  Effect_Base::DeserializationComplete(this);
}
