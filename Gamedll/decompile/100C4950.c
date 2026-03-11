/*
 * func-name: sub_100C4950
 * func-address: 0x100c4950
 * callers: 0x10010753
 * callees: 0x10005646, 0x10009ebc, 0x1001a875, 0x102c0ed0, 0x102c9d98
 */

int __thiscall sub_100C4950(int this)
{
  void *v2; // eax
  int result; // eax
  int v4; // eax
  int v5; // eax
  int v6; // [esp-8h] [ebp-48h] BYREF
  int v7; // [esp-4h] [ebp-44h]
  int v8; // [esp+0h] [ebp-40h]
  int v9; // [esp+4h] [ebp-3Ch]
  int v10; // [esp+8h] [ebp-38h]
  int v11; // [esp+Ch] [ebp-34h]
  int v12; // [esp+10h] [ebp-30h]
  float v13; // [esp+20h] [ebp-20h]
  void *v14; // [esp+24h] [ebp-1Ch]
  _BYTE v15[12]; // [esp+28h] [ebp-18h] BYREF
  int v16; // [esp+3Ch] [ebp-4h]

  Effect_Base::DeserializationComplete((Effect_Base *)this);
  v2 = (void *)(*(_DWORD *)(this + 1136) + 100);
  v13 = COERCE_FLOAT(&v6);
  std::string::string(&v6, v2);
  result = Precacher::UpdateTexture(*(_DWORD *)(this + 1136));
  if ( !*(_DWORD *)(this + 1052) )
  {
    v14 = operator new(0x120u);
    v16 = 0;
    if ( v14 )
    {
      v4 = *(_DWORD *)(this + 1092);
      v12 = *(unsigned __int8 *)(this + 1161);
      v11 = v4;
      *(float *)&v10 = 1.0;
      *(float *)&v9 = -1.0;
      v13 = *(float *)(this + 1140) * 0.5;
      *(float *)&v8 = v13;
      v7 = sub_10005646();
      v5 = sub_102C0ED0(v15);
      result = SurfaceDecal::SurfaceDecal(
                 *(_DWORD *)(this + 712),
                 *(_DWORD *)(this + 1136),
                 this + 856,
                 v5,
                 v7,
                 v8,
                 v9,
                 v10,
                 v11,
                 v12);
    }
    else
    {
      result = 0;
    }
    *(_DWORD *)(this + 1052) = result;
  }
  return result;
}
