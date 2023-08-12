using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Runtime.InteropServices;

namespace ShareX.HelpersLib
{
    public static class WebP
    {
        [DllImport("Webp.dll")]
        public static extern UInt64 EncodeBgra(IntPtr buff, int width, int height, int stride, IntPtr outBuff);
        [DllImport("Webp.dll")]
        public static extern int ValidateAndGetRes(IntPtr buff, int buffSize, IntPtr width, IntPtr height);
        [DllImport("Webp.dll")]
        public static extern IntPtr Decode(IntPtr buff, int buffSize, IntPtr width, IntPtr height);
        [DllImport("Webp.dll")]
        public static extern void FreeWebp(IntPtr ptr);
    }
    
}