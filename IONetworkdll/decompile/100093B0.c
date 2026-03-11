/*
 * func-name: ?get_length@Stream_Protocol_Head_Process@IONetwork@Outpop@@QAEHAAV?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@3@PAH@Z
 * func-address: 0x100093b0
 * callers: 0x100117b0, 0x10013cb0
 * callees: none
 */

int __stdcall Outpop::IONetwork::Stream_Protocol_Head_Process::get_length(Outpop::Utility::Stream_Base **a1, int *a2)
{
  char v2; // al
  int v3; // ebx
  int v4; // ebp
  int v5; // ebx
  char *ptr; // eax

  v2 = *Outpop::Utility::Stream_Base::get_read_ptr(*a1) & 0xC0;
  switch ( v2 )
  {
    case 64:
      v3 = 1;
      v4 = (unsigned __int8)Outpop::Utility::Stream_Base::get_read_ptr(*a1)[1];
LABEL_7:
      v5 = v3 + 1;
      Outpop::Utility::Stream_Base::get_read_ptr(*a1);
      ptr = Outpop::Utility::Stream_Base::get_read_ptr(*a1);
      Outpop::Utility::Binary_Stream::set_key_flag(*a1, (*ptr & 2) != 0);
      *a2 = v5;
      Outpop::Utility::Binary_Stream::head_size(*a1, v5);
      return v4;
    case -128:
      v3 = 2;
      v4 = *(unsigned __int16 *)(Outpop::Utility::Stream_Base::get_read_ptr(*a1) + 1);
      goto LABEL_7;
    case -64:
      v3 = 4;
      v4 = *(_DWORD *)(Outpop::Utility::Stream_Base::get_read_ptr(*a1) + 1);
      goto LABEL_7;
  }
  return 0;
}
