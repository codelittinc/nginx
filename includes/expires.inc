# Feed
location ~* \.(?:rss|atom)$ {
  root /usr/share/nginx/html;
  expires 1h;
  add_header Cache-Control "public";
}

# Media: images, icons, video, audio, HTC
location ~* \.(?:jpg|jpeg|gif|png|ico|cur|gz|svg|svgz|mp4|ogg|ogv|webm|htc)$ {
  root /usr/share/nginx/html;
  expires 1y;
  access_log off;
  add_header Cache-Control "public";
}

# CSS and Javascript
location ~* \.(?:css|js)$ {
  root /usr/share/nginx/html;
  expires 1y;
  access_log off;
  add_header Cache-Control "public";
}