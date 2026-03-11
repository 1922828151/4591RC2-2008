/*
 * func-name: ?HandleMouse@CPasswordEB@@UAE_NIUtagPOINT@@IJ@Z
 * func-address: 0x100a7200
 * callers: none
 * callees: 0x100971c0, 0x100a3050, 0x100a57a0, 0x100a57f0, 0x100a59e0, 0x100a6fb0
 */

bool __thiscall CPasswordEB::HandleMouse(
        CPasswordEB *this,
        unsigned int a2,
        struct tagPOINT a3,
        unsigned int a4,
        int a5)
{
  LONG x; // edi
  struct Engine *v7; // eax
  int v8; // eax
  int v9; // ecx
  bool result; // al
  int v11; // eax
  int v12; // [esp+14h] [ebp-8h] BYREF
  int v13; // [esp+18h] [ebp-4h] BYREF

  if ( !*((_BYTE *)this + 156) || !*((_BYTE *)this + 90) || *((_BYTE *)this + 89) )
    return 0;
  switch ( a2 )
  {
    case 0x200u:
      if ( *((_BYTE *)this + 788) )
      {
        CREEditBox::CUniBuffer::CPtoX((CPasswordEB *)((char *)this + 792), *((_DWORD *)this + 190), 0, (int *)&a2);
        if ( CREEditBox::CUniBuffer::XtoCP((void **)this + 198, a3.x + a2 - *((_DWORD *)this + 141), &v12, &v13) >= 0 )
        {
          v11 = v12;
          if ( v13 )
          {
            if ( v12 < *((_DWORD *)this + 135) )
              v11 = v12 + 1;
          }
          CPasswordEB::PlaceCaret(this, v11);
        }
      }
      goto LABEL_22;
    case 0x201u:
    case 0x203u:
      if ( !*((_BYTE *)this + 92) )
        CREDialog::RequestFocus(*((CREDialog **)this + 28), this);
      x = a3.x;
      if ( !(*(int (__thiscall **)(CPasswordEB *, LONG, LONG))(*(_DWORD *)this + 124))(this, a3.x, a3.y) )
        goto LABEL_22;
      *((_BYTE *)this + 788) = 1;
      v7 = Engine::Instance();
      SetCapture(*((HWND *)v7 + 35));
      CREEditBox::CUniBuffer::CPtoX((CPasswordEB *)((char *)this + 792), *((_DWORD *)this + 190), 0, (int *)&a2);
      if ( CREEditBox::CUniBuffer::XtoCP((void **)this + 198, a2 + x - *((_DWORD *)this + 141), &v13, &v12) >= 0 )
      {
        v8 = v13;
        if ( v12 && v13 < *((_DWORD *)this + 135) )
          v8 = v13 + 1;
        CPasswordEB::PlaceCaret(this, v8);
        *((_DWORD *)this + 189) = *((_DWORD *)this + 187);
        CREEditBox::ResetCaretBlink(this);
        v9 = *((_DWORD *)this + 18);
        if ( v9 )
          (*(void (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)v9 + 36))(0, *((float *)this + 40));
      }
      result = 1;
      break;
    case 0x202u:
      ReleaseCapture();
      *((_BYTE *)this + 788) = 0;
      return 1;
    default:
LABEL_22:
      result = 0;
      break;
  }
  return result;
}
