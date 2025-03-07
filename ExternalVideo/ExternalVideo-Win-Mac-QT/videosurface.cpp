#include "videosurface.h"
#include <QDebug>

VideoSurface::VideoSurface(QObject* parent) : QAbstractVideoSurface(parent) {
    // QVideoFrame::imageFormatFromPixelFormat(QVideoFrame::Format_YUV420P);
}

QList<QVideoFrame::PixelFormat> VideoSurface::supportedPixelFormats(QAbstractVideoBuffer::HandleType handleType) const {
    QList<QVideoFrame::PixelFormat> listPixelFormats;

    if(handleType == QAbstractVideoBuffer::NoHandle){
        listPixelFormats << QVideoFrame::Format_ARGB32 << QVideoFrame::Format_ARGB32_Premultiplied << QVideoFrame::Format_RGB32
                         << QVideoFrame::Format_RGB24 << QVideoFrame::Format_RGB565 << QVideoFrame::Format_RGB555
                         << QVideoFrame::Format_ARGB8565_Premultiplied << QVideoFrame::Format_BGRA32 << QVideoFrame::Format_BGRA32_Premultiplied
                         << QVideoFrame::Format_BGR32 << QVideoFrame::Format_BGR24 << QVideoFrame::Format_BGR565 << QVideoFrame::Format_BGR555
                         << QVideoFrame::Format_BGRA5658_Premultiplied << QVideoFrame::Format_AYUV444 << QVideoFrame::Format_AYUV444_Premultiplied
                         << QVideoFrame::Format_YUV444 << QVideoFrame::Format_YUV420P << QVideoFrame::Format_YV12 << QVideoFrame::Format_UYVY
                         << QVideoFrame::Format_YUYV << QVideoFrame::Format_NV12 << QVideoFrame::Format_NV21 << QVideoFrame::Format_IMC1
                         << QVideoFrame::Format_IMC2 << QVideoFrame::Format_IMC3 << QVideoFrame::Format_IMC4 << QVideoFrame::Format_Y8
                         << QVideoFrame::Format_Y16 << QVideoFrame::Format_Jpeg << QVideoFrame::Format_CameraRaw << QVideoFrame::Format_AdobeDng;

        // qDebug() << listPixelFormats;

        // Return the formats you will support
        return listPixelFormats;
    }
    else{
        return listPixelFormats;
    }

}

bool VideoSurface::present(const QVideoFrame& frame) {
    qDebug()<< " liangpeng " <<frame.handleType() << " " << nativeResolution() << " "<<isActive();
    if (frame.isValid()) {
        QVideoFrame cloneFrame(frame);
        emit frameAvailable(cloneFrame);

        return true;
    }

}
