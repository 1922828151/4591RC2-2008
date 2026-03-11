/*
 * func-name: ?SetWorldWarp@ShaderManager@@QAEXAAVMatrix@@@Z
 * func-address: 0x10018c50
 * callers: none
 * callees: none
 */

void __thiscall ShaderManager::SetWorldWarp(ShaderManager *this, struct Matrix *a2)
{
  qmemcpy((char *)this + 132, a2, 0x40u);
}
