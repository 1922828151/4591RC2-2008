/*
 * func-name: ?AddControl@CREDialog@@QAEJPAVCREControl@@@Z
 * func-address: 0x100b3510
 * callers: 0x100c8da0, 0x100caf60, 0x100cb050, 0x100cb120, 0x100cb220, 0x100cb320, 0x100cb420, 0x100cb500, 0x100cd100, 0x100cd200, 0x100cd2f0, 0x100cd400, 0x100cd540, 0x1014c910, 0x1014cc50, 0x1014cfa0, 0x1015ac30
 * callees: 0x1006c5d0, 0x100b3480
 */

int __thiscall CREDialog::AddControl(CREDialog *this, struct CREControl *a2)
{
  struct CREControl *v2; // ebp
  CREDialog *v3; // ebx
  int result; // eax
  _DWORD *v5; // edi
  int v6; // eax
  int v7; // esi
  _DWORD *v8; // ebx
  int v9; // [esp+14h] [ebp-14h]
  int v10; // [esp+18h] [ebp-10h]
  int v12; // [esp+20h] [ebp-8h]
  int v13; // [esp+24h] [ebp-4h]

  v2 = a2;
  v3 = this;
  result = CREDialog::InitControl(this, a2);
  if ( result >= 0 )
  {
    v5 = (_DWORD *)((char *)v3 + 764);
    v6 = sub_1006C5D0((int)v3 + 764, *((_DWORD *)v3 + 192) + 1);
    if ( v6 >= 0 )
    {
      *(_DWORD *)(*v5 + 4 * (*((_DWORD *)v3 + 192))++) = a2;
      v13 = 0;
    }
    else
    {
      v13 = v6;
    }
    if ( *((_DWORD *)a2 + 35) == 14 )
    {
      v12 = 0;
      if ( *((int *)a2 + 134) > 0 )
      {
        v10 = 0;
        do
        {
          v7 = v10 + *((_DWORD *)v2 + 133);
          CREDialog::InitControl(v3, *(struct CREControl **)(v7 + 528));
          v9 = 0;
          if ( *(int *)(v7 + 516) > 0 )
          {
            do
            {
              CREDialog::InitControl(v3, *(struct CREControl **)(*(_DWORD *)(v7 + 512) + 4 * v9));
              v8 = (_DWORD *)(4 * v9 + *(_DWORD *)(v7 + 512));
              if ( sub_1006C5D0((int)v5, v5[1] + 1) >= 0 )
                *(_DWORD *)(*v5 + 4 * v5[1]++) = *v8;
              v3 = this;
              ++v9;
            }
            while ( v9 < *(_DWORD *)(v7 + 516) );
            v2 = a2;
          }
          v10 += 532;
          ++v12;
        }
        while ( v12 < *((_DWORD *)v2 + 134) );
      }
    }
    if ( *((_DWORD *)v2 + 35) == 1 )
    {
      (*(void (__thiscall **)(struct CREControl *, const char *))(*(_DWORD *)v2 + 64))(v2, "KeyPressed.wav");
      (*(void (__thiscall **)(struct CREControl *, _DWORD))(*(_DWORD *)v2 + 76))(v2, 1.0);
    }
    return v13 >= 0 ? 0 : v13;
  }
  return result;
}
