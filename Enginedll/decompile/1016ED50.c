/*
 * func-name: ?Update@EventAttemper@@UAEXM@Z
 * func-address: 0x1016ed50
 * callers: none
 * callees: 0x1001dbd0, 0x1010f500, 0x1016fbb0, 0x1016fd00, 0x101a2500
 */

void __thiscall EventAttemper::Update(EventAttemper *this, float a2)
{
  EventAttemper *v2; // ebx
  _DWORD *v3; // ebp
  int v4; // esi
  void *v5; // ebp
  void **v6; // edi
  char *v7; // esi
  int v8; // edi
  float v9; // ebp
  int v10; // eax
  _DWORD *v11; // ecx
  bool v12; // zf
  float v13; // edx
  int v14; // esi
  int v15; // ebx
  _DWORD *v16; // esi
  _DWORD **v17; // esi
  int v18; // edi
  int v19; // eax
  _DWORD **v20; // ebx
  int v21; // ebx
  EventAttemper *v22; // edi
  int v23; // ebp
  int v24; // ebx
  _DWORD **v25; // edi
  int v26; // eax
  int v27; // edi
  int v28; // edi
  int v29; // ecx
  _DWORD *v30; // eax
  void (__thiscall ***v31)(_DWORD, int); // ecx
  int *v32; // eax
  int v34; // [esp+8h] [ebp-50h] BYREF
  void *v35; // [esp+Ch] [ebp-4Ch]
  _DWORD *v36; // [esp+10h] [ebp-48h] BYREF
  int v37; // [esp+14h] [ebp-44h]
  int v38; // [esp+18h] [ebp-40h] BYREF
  void *v39; // [esp+1Ch] [ebp-3Ch]
  int v40; // [esp+20h] [ebp-38h]
  _DWORD *v41; // [esp+24h] [ebp-34h]
  EventAttemper *v42; // [esp+28h] [ebp-30h] BYREF
  int v43; // [esp+2Ch] [ebp-2Ch]
  int v44; // [esp+34h] [ebp-24h]
  int v45; // [esp+38h] [ebp-20h] BYREF
  void *v46; // [esp+3Ch] [ebp-1Ch]
  float v47; // [esp+44h] [ebp-14h]
  int v48; // [esp+48h] [ebp-10h] BYREF
  int v49; // [esp+50h] [ebp-8h] BYREF

  v2 = this;
  if ( dword_11248B24 < 1 )
  {
    ++dword_11248B24;
    v3 = (_DWORD *)**((_DWORD **)this + 41);
    v41 = v3;
    while ( v3 != *((_DWORD **)v2 + 41) )
    {
      sub_1016FD00(&v38, v3 + 2);
      v4 = v38;
      v5 = (void *)*((_DWORD *)v2 + 4);
      if ( !v38 || (EventAttemper *)v38 != (EventAttemper *)((char *)v2 + 12) )
        invalid_parameter_noinfo();
      v6 = (void **)v39;
      if ( v39 != v5 )
      {
        if ( !v4 )
          invalid_parameter_noinfo();
        if ( v6 == *(void ***)(v4 + 4) )
          invalid_parameter_noinfo();
        if ( v6[3] )
        {
          if ( v6 == *(void ***)(v4 + 4) )
            invalid_parameter_noinfo();
          operator delete(v6[3]);
          if ( v6 == *(void ***)(v4 + 4) )
            invalid_parameter_noinfo();
          v6[3] = 0;
        }
        sub_1016FBB0((int)&v45, v4, v6);
      }
      if ( v41 == *((_DWORD **)v2 + 41) )
        invalid_parameter_noinfo();
      v41 = (_DWORD *)*v41;
      v3 = v41;
    }
    sub_1001DBD0((_DWORD *)v2 + 40);
    v7 = (char *)v2 + 108;
    v8 = (int)v2 + 108;
    *((float *)v2 + 1) = *((float *)v2 + 1) + a2;
    v9 = **((float **)v2 + 28);
LABEL_23:
    v38 = v8;
    while ( 1 )
    {
      v10 = *((_DWORD *)v7 + 1);
      *(float *)&v39 = v9;
      v44 = v10;
      if ( !v8 || (char *)v8 != v7 )
        invalid_parameter_noinfo();
      if ( LODWORD(v9) == v44 )
        break;
      if ( !v8 )
        invalid_parameter_noinfo();
      if ( LODWORD(v9) == *(_DWORD *)(v8 + 4) )
        invalid_parameter_noinfo();
      sub_1016FD00(&v34, LODWORD(v9) + 8);
      v46 = (void *)*((_DWORD *)v2 + 18);
      if ( !v34 || (EventAttemper *)v34 != (EventAttemper *)((char *)v2 + 68) )
        invalid_parameter_noinfo();
      v11 = v35;
      if ( v35 == v46 )
      {
        v12 = LODWORD(v9) == *(_DWORD *)(v8 + 4);
        v47 = v9;
        if ( v12 )
          invalid_parameter_noinfo();
        v12 = LODWORD(v9) == *((_DWORD *)v7 + 1);
        v13 = *(float *)LODWORD(v9);
        a2 = *(float *)LODWORD(v9);
        if ( !v12 )
        {
          **(float **)(LODWORD(v9) + 4) = v13;
          *(_DWORD *)(*(_DWORD *)LODWORD(v9) + 4) = *(_DWORD *)(LODWORD(v9) + 4);
          operator delete((void *)LODWORD(v9));
          --*((_DWORD *)v7 + 2);
        }
        v9 = a2;
        goto LABEL_23;
      }
      if ( !v34 )
      {
        invalid_parameter_noinfo();
        v11 = v35;
      }
      if ( v11 == *(_DWORD **)(v34 + 4) )
      {
        invalid_parameter_noinfo();
        v11 = v35;
      }
      if ( *((float *)v2 + 1) >= (double)*(float *)(v11[3] + 8) )
      {
        if ( v11 == *(_DWORD **)(v34 + 4) )
          invalid_parameter_noinfo();
        a2 = *(float *)(*((_DWORD *)v35 + 3) + 4);
        sub_1016FD00(&v36, &a2);
        v14 = *((_DWORD *)v2 + 32);
        if ( !v36 || v36 != (_DWORD *)((char *)v2 + 124) )
          invalid_parameter_noinfo();
        v15 = v37;
        if ( v37 != v14 )
        {
          v16 = v36;
          if ( !v36 )
            invalid_parameter_noinfo();
          if ( v15 == v16[1] )
            invalid_parameter_noinfo();
          v17 = **(_DWORD ****)(v15 + 16);
          v18 = v15 + 12;
          v40 = v15 + 12;
          while ( 1 )
          {
            if ( v15 == v36[1] )
              invalid_parameter_noinfo();
            v19 = v15 + 12;
            v20 = *(_DWORD ***)(v15 + 16);
            if ( !v18 || v18 != v19 )
              invalid_parameter_noinfo();
            if ( v17 == v20 )
              break;
            if ( !v18 )
              invalid_parameter_noinfo();
            if ( v17 == *(_DWORD ***)(v18 + 4) )
              invalid_parameter_noinfo();
            sub_1016FD00(&v42, v17 + 2);
            v21 = *((_DWORD *)this + 4);
            v22 = v42;
            if ( !v42 || v42 != (EventAttemper *)((char *)this + 12) )
              invalid_parameter_noinfo();
            v23 = v43;
            if ( v43 == v21 )
            {
              if ( v37 == v36[1] )
                invalid_parameter_noinfo();
              v12 = v17 == *(_DWORD ***)(v40 + 4);
              v24 = v40;
              v47 = *(float *)&v17;
              if ( v12 )
                invalid_parameter_noinfo();
              v25 = (_DWORD **)*v17;
              if ( v17 != *(_DWORD ***)(v37 + 16) )
              {
                *v17[1] = v25;
                (*v17)[1] = v17[1];
                operator delete(v17);
                --*(_DWORD *)(v37 + 20);
              }
              v9 = *(float *)&v39;
              v40 = v24;
              v15 = v37;
              v17 = v25;
              v18 = v40;
            }
            else
            {
              if ( v35 == *(void **)(v34 + 4) )
                invalid_parameter_noinfo();
              v26 = *(_DWORD *)(*((_DWORD *)v35 + 3) + 12);
              if ( v26 )
              {
                if ( v26 == 1 )
                {
                  if ( !v22 )
                    invalid_parameter_noinfo();
                  if ( v23 == *((_DWORD *)v22 + 1) )
                    invalid_parameter_noinfo();
                  v27 = *(_DWORD *)(v23 + 12);
                  if ( v35 == *(void **)(v34 + 4) )
                    invalid_parameter_noinfo();
                  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v27 + 8))(v27, *((_DWORD *)v35 + 3));
                }
              }
              else
              {
                if ( !v22 )
                  invalid_parameter_noinfo();
                if ( v23 == *((_DWORD *)v22 + 1) )
                  invalid_parameter_noinfo();
                v28 = *(_DWORD *)(v23 + 12);
                if ( v35 == *(void **)(v34 + 4) )
                  invalid_parameter_noinfo();
                (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v28 + 4))(v28, *((_DWORD *)v35 + 3));
              }
              if ( v35 == *(void **)(v34 + 4) )
                invalid_parameter_noinfo();
              v29 = v40;
              *(_DWORD *)(*((_DWORD *)v35 + 3) + 48) = 0;
              if ( v17 == *(_DWORD ***)(v29 + 4) )
                invalid_parameter_noinfo();
              v17 = (_DWORD **)*v17;
              v15 = v37;
              v9 = *(float *)&v39;
              v18 = v40;
            }
          }
        }
        v30 = v35;
        if ( v35 == *(void **)(v34 + 4) )
        {
          invalid_parameter_noinfo();
          v30 = v35;
        }
        if ( v30[3] )
        {
          if ( v30 == *(_DWORD **)(v34 + 4) )
          {
            invalid_parameter_noinfo();
            v30 = v35;
          }
          v31 = (void (__thiscall ***)(_DWORD, int))v30[3];
          if ( v31 )
          {
            (**v31)(v31, 1);
            v30 = v35;
          }
          if ( v30 == *(_DWORD **)(v34 + 4) )
          {
            invalid_parameter_noinfo();
            v30 = v35;
          }
          v30[3] = 0;
        }
        v2 = this;
        sub_1016FBB0((int)&v48, v34, v35);
        v7 = (char *)this + 108;
        v32 = sub_1010F500((int)this + 108, &v49, v38, (_DWORD **)LODWORD(v9));
        v8 = *v32;
        v9 = *((float *)v32 + 1);
        goto LABEL_23;
      }
      if ( LODWORD(v9) == *(_DWORD *)(v8 + 4) )
        invalid_parameter_noinfo();
      v9 = *(float *)LODWORD(v9);
    }
    --dword_11248B24;
  }
}
