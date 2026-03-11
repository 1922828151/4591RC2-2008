/*
 * func-name: ?InitAllControl@CControlBox@@QAEXPAVCREDialog@@@Z
 * func-address: 0x10151740
 * callers: 0x10152370, 0x10157340, 0x101573a0
 * callees: 0x100b3480
 */

void __thiscall CControlBox::InitAllControl(CControlBox *this, struct CREDialog *a2)
{
  unsigned int v2; // edi
  int i; // ebx
  int v5; // eax
  int v6; // eax

  v2 = 0;
  for ( i = 0; ; i += 12 )
  {
    v5 = *((_DWORD *)this + 134);
    if ( !v5 || v2 >= (*((_DWORD *)this + 135) - v5) / 12 )
      break;
    v6 = *((_DWORD *)this + 134);
    if ( !v6 || v2 >= (*((_DWORD *)this + 135) - v6) / 12 )
      invalid_parameter_noinfo();
    CREDialog::InitControl(a2, *(struct CREControl **)(*((_DWORD *)this + 134) + i));
    ++v2;
  }
}
