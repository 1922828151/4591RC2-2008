/*
 * func-name: ?PostRenderCollisionFace@World@@IAEXXZ
 * func-address: 0x101385a0
 * callers: 0x101396e0
 * callees: 0x10064610
 */

void __thiscall World::PostRenderCollisionFace(World *this)
{
  struct Canvas *v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  int v5; // eax
  int v6; // edi
  int v7; // eax
  struct Canvas *v8; // ebp
  int v9; // eax
  int v10; // eax
  int v11; // edi
  struct Canvas *v12; // ebp
  int v13; // eax
  int v14; // edi
  int v15; // eax
  struct Canvas *v16; // eax
  char *v17; // edi
  char *v18; // ebp
  char *v19; // ebx
  char *v20; // eax
  int v21; // ecx
  int i; // [esp+24h] [ebp-8h]
  struct Canvas *v23; // [esp+28h] [ebp-4h]

  v2 = Canvas::Instance();
  (*(void (__thiscall **)(struct Canvas *))(*(_DWORD *)v2 + 92))(v2);
  v3 = 2;
  for ( i = 24; ; i += 36 )
  {
    v4 = *((_DWORD *)this + 158);
    if ( !v4 || v3 - 2 >= (*((_DWORD *)this + 159) - v4) / 12 )
      break;
    v23 = Canvas::Instance();
    v5 = *((_DWORD *)this + 158);
    if ( !v5 || v3 - 1 >= (*((_DWORD *)this + 159) - v5) / 12 )
      invalid_parameter_noinfo();
    v6 = i - 12 + *((_DWORD *)this + 158);
    v7 = *((_DWORD *)this + 158);
    if ( !v7 || v3 - 2 >= (*((_DWORD *)this + 159) - v7) / 12 )
      invalid_parameter_noinfo();
    (*(void (__thiscall **)(struct Canvas *, int, int, int))(*(_DWORD *)v23 + 96))(
      v23,
      i - 24 + *((_DWORD *)this + 158),
      v6,
      -65536);
    v8 = Canvas::Instance();
    v9 = *((_DWORD *)this + 158);
    if ( !v9 || v3 >= (*((_DWORD *)this + 159) - v9) / 12 )
      invalid_parameter_noinfo();
    v10 = *((_DWORD *)this + 158);
    v11 = i + v10;
    if ( !v10 || v3 - 1 >= (*((_DWORD *)this + 159) - v10) / 12 )
      invalid_parameter_noinfo();
    (*(void (__thiscall **)(struct Canvas *, int, int, int))(*(_DWORD *)v8 + 96))(
      v8,
      i - 12 + *((_DWORD *)this + 158),
      v11,
      -65536);
    v12 = Canvas::Instance();
    v13 = *((_DWORD *)this + 158);
    if ( !v13 || v3 - 2 >= (*((_DWORD *)this + 159) - v13) / 12 )
      invalid_parameter_noinfo();
    v14 = i - 24 + *((_DWORD *)this + 158);
    v15 = *((_DWORD *)this + 158);
    if ( !v15 || v3 >= (*((_DWORD *)this + 159) - v15) / 12 )
      invalid_parameter_noinfo();
    (*(void (__thiscall **)(struct Canvas *, int, int, int))(*(_DWORD *)v12 + 96))(
      v12,
      i + *((_DWORD *)this + 158),
      v14,
      -65536);
    v3 += 3;
  }
  v16 = Canvas::Instance();
  (*(void (__thiscall **)(struct Canvas *))(*(_DWORD *)v16 + 100))(v16);
  v17 = (char *)*((_DWORD *)this + 159);
  if ( *((_DWORD *)this + 158) > (unsigned int)v17 )
    invalid_parameter_noinfo();
  v18 = (char *)*((_DWORD *)this + 158);
  if ( (unsigned int)v18 > *((_DWORD *)this + 159) )
    invalid_parameter_noinfo();
  if ( v18 != v17 )
  {
    v19 = (char *)*((_DWORD *)this + 159);
    v20 = v17;
    if ( v17 != v19 )
    {
      v21 = v18 - v17;
      do
      {
        *(_DWORD *)&v20[v21] = *(_DWORD *)v20;
        *(_DWORD *)&v20[v21 + 4] = *((_DWORD *)v20 + 1);
        *(_DWORD *)&v20[v21 + 8] = *((_DWORD *)v20 + 2);
        v20 += 12;
      }
      while ( v20 != v19 );
    }
    *((_DWORD *)this + 159) = &v18[12 * ((v19 - v17) / 12)];
  }
}
