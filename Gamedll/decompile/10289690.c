/*
 * func-name: sub_10289690
 * func-address: 0x10289690
 * callers: 0x1000b6b8
 * callees: none
 */

void __thiscall sub_10289690(_DWORD *this)
{
  EventAttemper *v2; // eax

  *this = &CSelfCorpUI::`vftable';
  v2 = (EventAttemper *)EventAttemper::Instance(this[988], 1);
  EventAttemper::RemoveObserver(v2);
  CREEditBox::CUniBuffer::~CUniBuffer((CREEditBox::CUniBuffer *)(this + 982));
  CTYDialog::~CTYDialog((CTYDialog *)this);
}
