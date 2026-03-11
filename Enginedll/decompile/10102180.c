/*
 * func-name: sub_10102180
 * func-address: 0x10102180
 * callers: 0x10102180, 0x10102250
 * callees: 0x10061060, 0x10063830, 0x10064610, 0x10102180, 0x101786e0, 0x101a251c
 */

char __thiscall sub_10102180(int this, Camera *a2, int a3)
{
  char result; // al
  _DWORD *v5; // esi
  int v6; // ebx
  struct Canvas *v7; // esi
  float v8[16]; // [esp+18h] [ebp-40h] BYREF

  if ( Camera::BoxInFrustum(a2, (const struct BBox *)this, 0.0, 0)
    || (result = sub_10061060((float *)this, (float *)a2 + 88)) != 0 )
  {
    if ( a3 > 0 )
    {
      v5 = (_DWORD *)(this + 52);
      v6 = a3;
      do
      {
        if ( *v5 )
          sub_10102180(a2, a3);
        ++v5;
        --v6;
      }
      while ( v6 );
    }
    v7 = Canvas::Instance();
    memset(v8, 0, sizeof(v8));
    sub_101786E0(1.0);
    v8[15] = 1.0;
    return (*(int (__thiscall **)(struct Canvas *, int, float *, _DWORD))(*(_DWORD *)v7 + 136))(
             v7,
             this,
             v8,
             (__int64)*(float *)(this + 20));
  }
  return result;
}
