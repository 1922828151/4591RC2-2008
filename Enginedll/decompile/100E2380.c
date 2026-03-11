/*
 * func-name: sub_100E2380
 * func-address: 0x100e2380
 * callers: none
 * callees: none
 */

errno_t __usercall sub_100E2380@<eax>(size_t SizeInBytes@<ecx>, char *Buffer@<edx>, const __time64_t *a3@<eax>)
{
  return ctime64_s(Buffer, SizeInBytes, a3);
}
