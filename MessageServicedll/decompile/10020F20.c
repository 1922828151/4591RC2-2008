/*
 * func-name: ??1Message_Sender@Message@Outpop@@QAE@XZ
 * func-address: 0x10020f20
 * callers: 0x10005560
 * callees: 0x1001e540, 0x100294f2
 */

void __thiscall Outpop::Message::Message_Sender::~Message_Sender(Outpop::Message::Message_Sender *this)
{
  int v2; // eax

  v2 = *((_DWORD *)this + 1);
  if ( v2 )
  {
    sub_1001E540(*((_DWORD *)this + 2), v2);
    operator delete(*((void **)this + 1));
  }
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
}
