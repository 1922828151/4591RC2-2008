/*
 * func-name: sub_100A4030
 * func-address: 0x100a4030
 * callers: none
 * callees: 0x100971c0, 0x100a3050, 0x100a3100
 */

char __thiscall sub_100A4030(struct CREControl *this, int a2, int a3, int a4, int a5, int a6)
{
  struct Engine *v7; // eax
  char result; // al

  if ( !*((_BYTE *)this + 156) || !*((_BYTE *)this + 90) || *((_BYTE *)this + 89) )
    return 0;
  switch ( a2 )
  {
    case 512:
      *((_BYTE *)this + 709) = (*(int (__thiscall **)(struct CREControl *, int, int))(*(_DWORD *)this + 124))(
                                 this,
                                 a3,
                                 a4) != 0;
      return 0;
    case 513:
    case 515:
      if ( !(*(int (__thiscall **)(struct CREControl *, int, int))(*(_DWORD *)this + 124))(this, a3, a4) )
        return 0;
      *((_BYTE *)this + 708) = 1;
      v7 = Engine::Instance();
      SetCapture(*((HWND *)v7 + 35));
      if ( !*((_BYTE *)this + 92) )
        CREDialog::RequestFocus(*((CREDialog **)this + 28), this);
      result = 1;
      break;
    case 514:
      if ( !*((_BYTE *)this + 708) )
        return 0;
      *((_BYTE *)this + 708) = 0;
      ReleaseCapture();
      if ( !*(_BYTE *)(*((_DWORD *)this + 28) + 85) )
        CREDialog::ClearFocus();
      if ( (*(int (__thiscall **)(struct CREControl *, int, int))(*(_DWORD *)this + 124))(this, a3, a4) )
        (*(void (__thiscall **)(_DWORD, struct CREControl *))(**((_DWORD **)this + 174) + 192))(
          *((_DWORD *)this + 174),
          this);
      result = 1;
      break;
    default:
      return 0;
  }
  return result;
}
