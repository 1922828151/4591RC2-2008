/*
 * func-name: ??1CExternalApiInitializer@@QAE@XZ
 * func-address: 0x100ce860
 * callers: none
 * callees: 0x100a53a0, 0x100a5c40
 */

void __thiscall CExternalApiInitializer::~CExternalApiInitializer(CExternalApiInitializer *this)
{
  CREEditBox::CUniBuffer::UninitializeUniscribe();
  CREIMEEditBox::UninitializeImm();
  CMLIMEEditBox::UninitializeImm();
}
