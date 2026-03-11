/*
 * func-name: sub_1001E7C0
 * func-address: 0x1001e7c0
 * callers: 0x1001ebb0
 * callees: 0x100149b0, 0x1001e590
 */

char __thiscall sub_1001E7C0(_DWORD *this, _DWORD *a2, int a3, int a4)
{
  int v4; // ebp
  int v6; // eax
  int v7; // ecx
  _DWORD *v8; // edx
  int *v9; // eax
  int v10; // eax
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // ebx
  int v15; // ecx
  int v16; // eax
  int v17; // edx
  int v18; // eax
  int v19; // ebp
  int v20; // eax
  int v21; // eax
  unsigned int v22; // ecx
  int v23; // ebx
  int v24; // ecx
  int v25; // eax
  int v26; // edx
  int v27; // eax
  int v28; // ebp
  unsigned int v29; // ecx
  int v30; // ebx
  int v31; // ecx
  int v32; // eax
  int v33; // edx
  int v34; // eax
  int v35; // ebp
  int v37; // [esp+Ch] [ebp-10h]
  int v38; // [esp+10h] [ebp-Ch]
  unsigned int v39; // [esp+14h] [ebp-8h]
  unsigned int v40; // [esp+14h] [ebp-8h]
  _DWORD *v41; // [esp+18h] [ebp-4h]
  int v42; // [esp+20h] [ebp+4h]
  int v43; // [esp+20h] [ebp+4h]
  unsigned int v44; // [esp+20h] [ebp+4h]
  int v45; // [esp+28h] [ebp+Ch]
  int v46; // [esp+28h] [ebp+Ch]

  v4 = a3;
  v6 = this[6];
  ++dword_1005B1C4;
  if ( *(_DWORD *)(v6 + 4 * a3) == -1 )
  {
    LOBYTE(v6) = sub_1001E590(this, a3, a4);
    if ( (_BYTE)v6 )
    {
      *(_DWORD *)(this[6] + 4 * a3) = this[7];
      ++this[8];
      v7 = this[2];
      v8 = (_DWORD *)(12 * a3 + *(_DWORD *)(v7 + 12));
      v9 = (int *)(*this + 12 * a3);
      v38 = *v9;
      v37 = v9[2];
      v45 = v9[1];
      v10 = *v8 & 0xFFFFFFF;
      v41 = v8;
      if ( !*(_BYTE *)(v10 + this[5]) )
      {
        v12 = *(_DWORD *)(v7 + 16) + 8 * v10;
        v13 = 0;
        v42 = v12;
        v39 = 0;
        if ( *(_WORD *)(v12 + 2) )
        {
          do
          {
            v14 = *(_DWORD *)(*(_DWORD *)(this[2] + 20) + 4 * (v13 + *(_DWORD *)(v12 + 4)));
            if ( v14 != v4 )
            {
              v15 = *(_DWORD *)(*this + 12 * v14);
              v16 = *this + 12 * v14;
              v17 = *(_DWORD *)(v16 + 4);
              v18 = *(_DWORD *)(v16 + 8);
              if ( v15 == v38 && v17 == v45 )
              {
                v19 = v18;
              }
              else if ( v15 == v45 && v17 == v38 )
              {
                v19 = v18;
              }
              else if ( v15 == v38 && v18 == v45 )
              {
                v19 = v17;
              }
              else if ( v15 == v45 && v18 == v38 )
              {
                v19 = v17;
              }
              else if ( v17 == v38 && v18 == v45 )
              {
                v19 = *(_DWORD *)(*this + 12 * v14);
              }
              else if ( v17 == v45 && v18 == v38 )
              {
                v19 = *(_DWORD *)(*this + 12 * v14);
              }
              else
              {
                v19 = -1;
              }
              if ( *(_DWORD *)(this[6] + 4 * v14) == -1 )
              {
                if ( a2[1] == *a2 )
                  sub_100149B0(a2, 1);
                *(_DWORD *)(a2[2] + 4 * a2[1]++) = v14;
                if ( a2[1] == *a2 )
                  sub_100149B0(a2, 1);
                *(_DWORD *)(a2[2] + 4 * a2[1]++) = v19;
              }
              v12 = v42;
            }
            v4 = a3;
            v13 = ++v39;
          }
          while ( v39 < *(unsigned __int16 *)(v12 + 2) );
          v8 = v41;
        }
      }
      v20 = v8[1] & 0xFFFFFFF;
      if ( !*(_BYTE *)(v20 + this[5]) )
      {
        v21 = *(_DWORD *)(this[2] + 16) + 8 * v20;
        v22 = 0;
        v43 = v21;
        v40 = 0;
        if ( *(_WORD *)(v21 + 2) )
        {
          do
          {
            v23 = *(_DWORD *)(*(_DWORD *)(this[2] + 20) + 4 * (v22 + *(_DWORD *)(v21 + 4)));
            if ( v23 != v4 )
            {
              v24 = *(_DWORD *)(*this + 12 * v23);
              v25 = *this + 12 * v23;
              v26 = *(_DWORD *)(v25 + 4);
              v27 = *(_DWORD *)(v25 + 8);
              if ( v24 == v45 && v26 == v37 )
              {
                v28 = v27;
              }
              else if ( v24 == v37 && v26 == v45 )
              {
                v28 = v27;
              }
              else if ( v24 == v45 && v27 == v37 )
              {
                v28 = v26;
              }
              else if ( v24 == v37 && v27 == v45 )
              {
                v28 = v26;
              }
              else if ( v26 == v45 && v27 == v37 )
              {
                v28 = *(_DWORD *)(*this + 12 * v23);
              }
              else if ( v26 == v37 && v27 == v45 )
              {
                v28 = *(_DWORD *)(*this + 12 * v23);
              }
              else
              {
                v28 = -1;
              }
              if ( *(_DWORD *)(this[6] + 4 * v23) == -1 )
              {
                if ( a2[1] == *a2 )
                  sub_100149B0(a2, 1);
                *(_DWORD *)(a2[2] + 4 * a2[1]++) = v23;
                if ( a2[1] == *a2 )
                  sub_100149B0(a2, 1);
                *(_DWORD *)(a2[2] + 4 * a2[1]++) = v28;
              }
              v21 = v43;
            }
            v4 = a3;
            v22 = ++v40;
          }
          while ( v40 < *(unsigned __int16 *)(v21 + 2) );
          v8 = v41;
        }
      }
      v6 = v8[2] & 0xFFFFFFF;
      if ( !*(_BYTE *)(v6 + this[5]) )
      {
        v6 = *(_DWORD *)(this[2] + 16) + 8 * v6;
        v29 = 0;
        v46 = v6;
        v44 = 0;
        if ( *(_WORD *)(v6 + 2) )
        {
          while ( 1 )
          {
            v30 = *(_DWORD *)(*(_DWORD *)(this[2] + 20) + 4 * (v29 + *(_DWORD *)(v6 + 4)));
            if ( v30 != v4 )
            {
              v31 = *(_DWORD *)(*this + 12 * v30);
              v32 = *this + 12 * v30;
              v33 = *(_DWORD *)(v32 + 4);
              v34 = *(_DWORD *)(v32 + 8);
              if ( v31 == v38 && v33 == v37 )
              {
                v35 = v34;
              }
              else if ( v31 == v37 && v33 == v38 )
              {
                v35 = v34;
              }
              else if ( v31 == v38 && v34 == v37 )
              {
                v35 = v33;
              }
              else if ( v31 == v37 && v34 == v38 )
              {
                v35 = v33;
              }
              else if ( v33 == v38 && v34 == v37 )
              {
                v35 = *(_DWORD *)(*this + 12 * v30);
              }
              else if ( v33 == v37 && v34 == v38 )
              {
                v35 = *(_DWORD *)(*this + 12 * v30);
              }
              else
              {
                v35 = -1;
              }
              if ( *(_DWORD *)(this[6] + 4 * v30) == -1 )
              {
                if ( a2[1] == *a2 )
                  sub_100149B0(a2, 1);
                *(_DWORD *)(a2[2] + 4 * a2[1]++) = v30;
                if ( a2[1] == *a2 )
                  sub_100149B0(a2, 1);
                *(_DWORD *)(a2[2] + 4 * a2[1]++) = v35;
              }
              v6 = v46;
            }
            v29 = ++v44;
            if ( v44 >= *(unsigned __int16 *)(v6 + 2) )
              break;
            v4 = a3;
          }
        }
      }
    }
  }
  return v6;
}
