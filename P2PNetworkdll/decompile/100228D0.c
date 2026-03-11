/*
 * func-name: sub_100228D0
 * func-address: 0x100228d0
 * callers: 0x1001f4a0
 * callees: 0x10023100
 */

int __usercall sub_100228D0@<eax>(int a1@<edi>)
{
  int v1; // eax
  int v2; // eax
  int v3; // ebp
  int v4; // ebx
  int *v5; // ecx
  int *v6; // edx
  int v7; // ebp
  int *v8; // ebp
  int *v9; // ecx
  int v10; // ebx
  _BYTE *v12; // ebx
  int v13; // ecx
  int v14; // eax
  int i; // ebx
  _BYTE *v16; // ebx
  int v17; // [esp+Ch] [ebp-Ch]
  int *v18; // [esp+10h] [ebp-8h]
  int *v19; // [esp+14h] [ebp-4h]
  int *v20; // [esp+14h] [ebp-4h]

  v1 = 0;
  if ( !*(_DWORD *)(a1 + 388) )
  {
LABEL_11:
    v5 = *(int **)(a1 + 340);
    v6 = &v5[*(_DWORD *)(a1 + 344)];
    v19 = v6;
    while ( 1 )
    {
      do
      {
        if ( v5 == v6 )
        {
LABEL_15:
          v8 = *(int **)(a1 + 292);
          v9 = &v8[*(_DWORD *)(a1 + 296)];
          v20 = v9;
          while ( v8 != v9 )
          {
            while ( 1 )
            {
              v10 = *v8++;
              if ( v10 )
                break;
              if ( v8 == v9 )
                goto LABEL_19;
            }
            if ( *(_BYTE *)(v10 + 28) )
            {
              if ( v1 )
              {
                if ( *(_DWORD *)(a1 + 448) == *(_DWORD *)(a1 + 444) && !sub_10023100() )
                  return 0;
                v9 = v20;
                *(_BYTE *)(*(_DWORD *)(a1 + 448))++ = 12;
              }
              v16 = *(_BYTE **)v10;
              if ( *v16 )
              {
                while ( *(_DWORD *)(a1 + 448) != *(_DWORD *)(a1 + 444) || sub_10023100() )
                {
                  *(_BYTE *)(*(_DWORD *)(a1 + 448))++ = *v16;
                  if ( !*++v16 )
                  {
                    v9 = v20;
                    goto LABEL_51;
                  }
                }
                return 0;
              }
LABEL_51:
              v1 = 1;
            }
          }
LABEL_19:
          if ( *(_DWORD *)(a1 + 448) != *(_DWORD *)(a1 + 444) || sub_10023100() )
          {
            *(_BYTE *)(*(_DWORD *)(a1 + 448))++ = 0;
            return *(_DWORD *)(a1 + 452);
          }
          return 0;
        }
        while ( 1 )
        {
          v7 = *v5++;
          v18 = v5;
          if ( v7 )
            break;
          if ( v5 == v6 )
            goto LABEL_15;
        }
      }
      while ( !*(_DWORD *)(v7 + 4) );
      if ( v1 )
      {
        if ( *(_DWORD *)(a1 + 448) == *(_DWORD *)(a1 + 444) && !sub_10023100() )
          return 0;
        *(_BYTE *)(*(_DWORD *)(a1 + 448))++ = 12;
      }
      v12 = *(_BYTE **)v7;
      if ( **(_BYTE **)v7 )
        break;
LABEL_31:
      if ( *(_DWORD *)(a1 + 448) == *(_DWORD *)(a1 + 444) && !sub_10023100() )
        return 0;
      *(_BYTE *)(*(_DWORD *)(a1 + 448))++ = 61;
      v13 = *(_DWORD *)(*(_DWORD *)(v7 + 4) + 20);
      v14 = *(_DWORD *)(a1 + 448);
      v17 = v13;
      if ( *(_BYTE *)(a1 + 488) )
        v17 = --v13;
      for ( i = 0; i < v13; ++i )
      {
        if ( v14 == *(_DWORD *)(a1 + 444) )
        {
          if ( !sub_10023100() )
            return 0;
          v13 = v17;
        }
        *(_BYTE *)(*(_DWORD *)(a1 + 448))++ = *(_BYTE *)(i + *(_DWORD *)(*(_DWORD *)(v7 + 4) + 16));
        v14 = *(_DWORD *)(a1 + 448);
      }
      v5 = v18;
      v6 = v19;
      v1 = 1;
    }
    while ( *(_DWORD *)(a1 + 448) != *(_DWORD *)(a1 + 444) || sub_10023100() )
    {
      *(_BYTE *)(*(_DWORD *)(a1 + 448))++ = *v12;
      if ( !*++v12 )
        goto LABEL_31;
    }
    return 0;
  }
  if ( *(_DWORD *)(a1 + 448) == *(_DWORD *)(a1 + 444) && !sub_10023100() )
    return 0;
  *(_BYTE *)(*(_DWORD *)(a1 + 448))++ = 61;
  v2 = *(_DWORD *)(a1 + 448);
  v3 = *(_DWORD *)(*(_DWORD *)(a1 + 388) + 20);
  if ( *(_BYTE *)(a1 + 488) )
    --v3;
  v4 = 0;
  if ( v3 <= 0 )
  {
LABEL_10:
    v1 = 1;
    goto LABEL_11;
  }
  while ( v2 != *(_DWORD *)(a1 + 444) || sub_10023100() )
  {
    *(_BYTE *)(*(_DWORD *)(a1 + 448))++ = *(_BYTE *)(v4 + *(_DWORD *)(*(_DWORD *)(a1 + 388) + 16));
    v2 = *(_DWORD *)(a1 + 448);
    if ( ++v4 >= v3 )
      goto LABEL_10;
  }
  return 0;
}
