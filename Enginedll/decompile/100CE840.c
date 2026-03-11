/*
 * func-name: ??0CExternalApiInitializer@@QAE@XZ
 * func-address: 0x100ce840
 * callers: none
 * callees: 0x100a52e0, 0x100a5a00, 0x100a89f0
 */

CExternalApiInitializer *__thiscall CExternalApiInitializer::CExternalApiInitializer(CExternalApiInitializer *this)
{
  CREEditBox::CUniBuffer::InitializeUniscribe();
  CREIMEEditBox::InitializeImm();
  CMLIMEEditBox::InitializeImm();
  return this;
}
