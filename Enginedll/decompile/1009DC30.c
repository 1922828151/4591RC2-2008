/*
 * func-name: ?AppendChild@ModelFrame@@QAEXPAU1@@Z
 * func-address: 0x1009dc30
 * callers: none
 * callees: none
 */

void __thiscall ModelFrame::AppendChild(ModelFrame *this, struct ModelFrame *a2)
{
  *((_DWORD *)a2 + 89) = *((_DWORD *)this + 90);
  *((_DWORD *)this + 90) = a2;
}
