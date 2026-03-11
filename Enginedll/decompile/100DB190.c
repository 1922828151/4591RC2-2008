/*
 * func-name: ?ControlJustReleased@Input@@QAE_NHH@Z
 * func-address: 0x100db190
 * callers: 0x1008c3e0
 * callees: none
 */

bool __thiscall Input::ControlJustReleased(Input *this, int a2, int a3)
{
  int v5; // ebx
  int v6; // edi
  int *v7; // ebp
  int v8; // eax
  char v9; // al

  if ( a2 == -1 || !*((_DWORD *)this + a2 + 430) )
    return 0;
  v5 = a3;
  v6 = 0;
  v7 = (int *)((char *)this + 8 * a2 + 112);
  do
  {
    v8 = *v7;
    if ( *v7 == -1 )
    {
      *((_BYTE *)&a2 + v6) = 0;
      goto LABEL_22;
    }
    if ( v8 < 400 || v8 > 403 )
    {
      if ( v8 < 40000 || v8 > 40011 )
      {
        if ( !(*(unsigned __int8 (__thiscall **)(Input *, int))(*(_DWORD *)this + 52))(this, *v7)
          || (*(unsigned __int8 (__thiscall **)(Input *, int))(*(_DWORD *)this + 40))(this, *v7) )
        {
LABEL_20:
          v9 = 0;
          goto LABEL_21;
        }
        v9 = 1;
      }
      else
      {
        if ( !(*(unsigned __int8 (__thiscall **)(Input *, int, int))(*(_DWORD *)this + 64))(this, v5, *v7)
          || (*(unsigned __int8 (__thiscall **)(Input *, int, int))(*(_DWORD *)this + 60))(this, v5, *v7) )
        {
          goto LABEL_20;
        }
        v9 = 1;
      }
    }
    else
    {
      if ( !(*(unsigned __int8 (__thiscall **)(Input *, int))(*(_DWORD *)this + 56))(this, *v7)
        || (*(unsigned __int8 (__thiscall **)(Input *, int))(*(_DWORD *)this + 44))(this, *v7) )
      {
        goto LABEL_20;
      }
      v9 = 1;
    }
LABEL_21:
    *((_BYTE *)&a2 + v6) = v9;
LABEL_22:
    ++v6;
    ++v7;
  }
  while ( v6 < 2 );
  return (_WORD)a2 != 0;
}
