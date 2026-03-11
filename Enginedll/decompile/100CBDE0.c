/*
 * func-name: ??1CREComboBox@@UAE@XZ
 * func-address: 0x100cbde0
 * callers: 0x1006a8c0
 * callees: 0x10054c00, 0x10069fa0, 0x100b3710, 0x100c7390
 */

void __thiscall CREComboBox::~CREComboBox(void **this)
{
  struct AudioDevice *v2; // eax

  *this = &CREComboBox::`vftable';
  CREComboBox::RemoveAllItems((CREComboBox *)this);
  if ( this[363] )
  {
    v2 = AudioDevice::Instance();
    (*(void (__thiscall **)(struct AudioDevice *, void *))(*(_DWORD *)v2 + 20))(v2, this[363]);
  }
  if ( this[380] )
  {
    free(this[380]);
    this[380] = 0;
  }
  this[382] = 0;
  this[381] = 0;
  this[207] = &CREScrollBar::`vftable';
  CREControl::~CREControl((CREControl *)(this + 207));
  CREStatic::~CREStatic((CREStatic *)this);
}
